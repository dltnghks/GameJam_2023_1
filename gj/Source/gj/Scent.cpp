// Fill out your copyright notice in the Description page of Project Settings.


#include "Scent.h"
#include "ScentGenerator.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

// Sets default values
AScent::AScent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AScent::BeginPlay()
{
	Super::BeginPlay();
	PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
}

// Called every frame
void AScent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// 플레이어의 위치 가져오기

	FVector ScentLocation = GetActorLocation();

	Direction = PlayerCharacter->GetActorLocation() - ScentLocation;
	CurrentDistance = Direction.Size();
	Direction = Direction.GetSafeNormal();

	//UE_LOG(LogTemp, Log, TEXT("%d"), CurrentDistance);
	if (CurrentDistance >= 50.f) {
		ScentLocation += Direction * speed * DeltaTime;
		SetActorLocation(ScentLocation);
	}
	else {
		ReturnSelf();
	}
}

void AScent::ReturnSelf()
{
	if (ObjectPool == nullptr) {
		UE_LOG(LogTemp, Log, TEXT("nullptr"));
		return;
	}
	ObjectPool->ReturnObject(this);
	SetActive(false);
}

void AScent::SetActive(bool IsActive)
{
	bActive = IsActive;
	SetActorHiddenInGame(!bActive);
}

