// Fill out your copyright notice in the Description page of Project Settings.


#include "ScentObject.h"
//#include "ScentGenerator.h"

// Sets default values
AScentObject::AScentObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AScentObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScentObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AScentObject::ReturnSelf()
{
	if (ObjectPool == nullptr) return;
	//ObjectPool->ReturnObject(this);
	SetActive(false);
}

void AScentObject::SetActive(bool IsActive)
{
	bActive = IsActive;
	SetActorHiddenInGame(!bActive);
}

