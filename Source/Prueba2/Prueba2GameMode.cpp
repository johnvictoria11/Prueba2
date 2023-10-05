// Copyright Epic Games, Inc. All Rights Reserved.

#include "Prueba2GameMode.h"
#include "Prueba2Character.h"
#include "UObject/ConstructorHelpers.h"

APrueba2GameMode::APrueba2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
