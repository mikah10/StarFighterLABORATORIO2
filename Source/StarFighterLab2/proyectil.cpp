// Fill out your copyright notice in the Description page of Project Settings.


#include "proyectil.h"

// Sets default values
Aproyectil::Aproyectil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aproyectil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aproyectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

