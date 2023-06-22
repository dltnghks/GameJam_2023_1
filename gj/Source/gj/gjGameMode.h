// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "gjGameMode.generated.h"

UCLASS(minimalapi)
class AgjGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AgjGameMode();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		int GetFlowerCount() { return FlowerCount; }

	void SetFlowerCount(int num) { FlowerCount = num; }

	UFUNCTION(BlueprintCallable)
		void DiscountFlower(){ FlowerCount--; }

private:
	int FlowerCount;
};



