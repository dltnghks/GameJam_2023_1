// Copyright Epic Games, Inc. All Rights Reserved.

#include "gjGameMode.h"
#include "gjCharacter.h"
#include "UObject/ConstructorHelpers.h"
//#include "ScentGenerator.h"

AgjGameMode::AgjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AgjGameMode::StartPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Log Message"));
	//ScentGenerator = NewObject<UScentGenerator>();
	
}
