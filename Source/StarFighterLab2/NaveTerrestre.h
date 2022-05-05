// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "NaveTerrestre.generated.h"
#include "Components/ActorComponent.h"
#include "RandomMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class STARFIGHTERLAB2_API ANaveTerrestre : public ANave
{
	GENERATED_BODY()
	

UPROPERTY()
	float MovementRadius;

	MovementRadius = 0;

	AActor* Parent = GetOwner();
	if (Parent)
	{
		Parent->SetActorLocation(
			Parent->GetActorLocation() +
			FVector(
				FMath::FRandRange(-1, 1) * MovementRadius,
				FMath::FRandRange(-1, 1) * MovementRadius,
				FMath::FRandRange(-1, 1) * MovementRadius)); 
public:
	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;

};
UCLASS(ClassGroup = (Custom),
	meta = (BlueprintSpawnableComponent))
	class STARFIGHTERLAB2_API URandomMovementComponent : public
	UActorComponent
{
	GENERATED_BODY()
public:
	URandomMovementComponent();
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick
		TickType, FActorComponentTickFunction* ThisTickFunction)
		override;
	UPROPERTY()
		float MovementRadius;
};