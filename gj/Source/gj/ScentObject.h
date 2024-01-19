// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScentObject.generated.h"

UCLASS()
class GJ_API AScentObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScentObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE void SetObjectPool(class UScentGenerator* InObjectPool) { ObjectPool = InObjectPool; }
	void ReturnSelf();
	void SetActive(bool IsActive);
	FORCEINLINE bool IsActive() { return bActive; }

private:
	bool bActive;
	class UScentGenerator* ObjectPool;
};
