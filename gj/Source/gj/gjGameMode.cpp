// Copyright Epic Games, Inc. All Rights Reserved.

#include "gjGameMode.h"
#include "gjCharacter.h"
#include "UObject/ConstructorHelpers.h"

AgjGameMode::AgjGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
