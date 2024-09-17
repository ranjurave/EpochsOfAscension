// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetMovementComponent.h"

void UPlanetMovementComponent::UpdateGravityDirection(const FVector& NewGravityDir) {
	SetGravityDirection(NewGravityDir);
}