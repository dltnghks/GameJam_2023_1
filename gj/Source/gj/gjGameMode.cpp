// Copyright Epic Games, Inc. All Rights Reserved.

#include "gjGameMode.h"
#include "gjCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

AgjGameMode::AgjGameMode()
{

	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("Flower"), Actors);
	FlowerCount = Actors.Num();
}

void AgjGameMode::BeginPlay() {
	Super::BeginPlay();
}