// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GravityAdjustedMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class EPOCHSOFASCENSION_API UGravityAdjustedMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		void SetGravityDirection(const FVector& GravityDirection);
};
