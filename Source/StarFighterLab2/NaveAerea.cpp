// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAerea.h"

#include "RandomMovementComponent.h"
URandomMovementComponent::URandomMovementComponent()

ANaveAerea::ANaveAerea::ANaveAerea()
{


}
{
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
	MovementRadius = 5;
}
void URandomMovementComponent::BeginPlay()
{
	Super::BeginPlay();
}
void URandomMovementComponent::TickComponent(float
	DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType,
		ThisTickFunction);
	AActor* Parent = GetOwner();
	if (Parent)
	{
		Parent->SetActorLocation(
			Parent->GetActorLocation() +
			FVector(
				FMath::FRandRange(-1, 1) * MovementRadius,
				FMath::FRandRange(-1, 1) * MovementRadius,
				FMath::FRandRange(-1, 1) * MovementRadius));
	}
}