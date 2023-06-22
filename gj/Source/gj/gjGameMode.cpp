// Copyright Epic Games, Inc. All Rights Reserved.

#include "gjGameMode.h"
#include "gjCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "HUDWidget.h"
#include "EndGameWidget.h"

AgjGameMode::AgjGameMode()
{

	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Flower"), Actors);
	FlowerCount = Actors.Num();
}

void AgjGameMode::BeginPlay() {
	Super::BeginPlay();

	HUDWidget = CreateWidget<UHUDWidget>(GetWorld(), BP_HUDWidget);
	HUDWidget->AddToViewport();

	HUDWidget->ChangeAllValue(FlowerCount);
	HUDWidget->ChangeRemainValue(FlowerCount);

	EndGameWidget = CreateWidget<UEndGameWidget>(GetWorld(), BP_EndGameWidget);
}

void AgjGameMode::DiscountFlower()
{
	FlowerCount--;
	HUDWidget->ChangeRemainValue(FlowerCount);
	if (FlowerCount == 0) {
		EndGame();
	}
}

void AgjGameMode::EndGame()
{
}
