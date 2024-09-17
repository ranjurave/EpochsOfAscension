// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlanetMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class EPOCHSOFASCENSION_API UPlanetMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		void UpdateGravityDirection(const FVector& NewGravityDir);

	
};
