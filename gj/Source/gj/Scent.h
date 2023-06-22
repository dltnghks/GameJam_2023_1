// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Scent.generated.h"

UCLASS()
class GJ_API AScent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE void SetObjectPool(class AScentGenerator* InObjectPool) { ObjectPool = InObjectPool; }
	void ReturnSelf();
	void SetActive(bool IsActive);
	FORCEINLINE bool IsActive() { return bActive; }

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MoveActor")
		float speed;

private:
	bool bActive;
	class AScentGenerator* ObjectPool;
	// TArray<FVector> targetPos;
	ACharacter* PlayerCharacter;
	FVector Direction;
	float CurrentDistance;
};
