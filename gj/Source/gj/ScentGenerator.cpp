// Fill out your copyright notice in the Description page of Project Settings.


#include "ScentGenerator.h"
#include "Scent.h"

// Sets default values
AScentGenerator::AScentGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ScentSpawnTime = 10;
	//ScentGeneratorMesh = CreateDefaultSubobject<UStaticMesh>(FName("StaticMesh"));
}

AScent* AScentGenerator::GetPooledObject()
{
	if (Pool.Num() == 0) {
		Expand();
	}

	return Pool.Pop();
}

void AScentGenerator::Expand()
{
	for (int i = 0; i < ExpandSize; i++) {
		AScent* PoolableActor = GetWorld()->SpawnActor<AScent>(PooledObjectSubclass, FVector().ZeroVector, FRotator().ZeroRotator);
		PoolableActor->SetActive(false);
		PoolableActor->SetObjectPool(this);
		PoolableActor->SetActorLocation(GetActorLocation());
		Pool.Push(PoolableActor);
	}
	PoolSize += ExpandSize;
}

void AScentGenerator::ReturnObject(AScent* ReturnObject)
{
	Pool.Push(ReturnObject);
}
/*
void AScentGenerator::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}*/

// Called when the game starts or when spawned
void AScentGenerator::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AScentGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CurrentSpawnTime += DeltaTime;

	if (CurrentSpawnTime >= ScentSpawnTime) {
		UE_LOG(LogTemp, Log, TEXT("Spawn"));
		CurrentSpawnTime = 0;
		AScent* GeneratedScent = GetPooledObject();
		GeneratedScent->SetActorLocation(GetActorLocation());
		GeneratedScent->SetActive(true);
	}
}
