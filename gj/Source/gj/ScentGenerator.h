// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScentGenerator.generated.h"

UCLASS()
class GJ_API AScentGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScentGenerator();
	class AScent* GetPooledObject();
	void Expand();
	void ReturnObject(class AScent* ReturnObject);

private:
/*	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
		*/
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AScent> PooledObjectSubclass;
	int32 PoolSize = 0;
	int32 ExpandSize = 10;

private:
	TArray<class AScent*> Pool;
	//UStaticMesh* ScentGeneratorMesh;
	float CurrentSpawnTime = 0;

	float ScentSpawnTime;
	

};
