// Fill out your copyright notice in the Description page of Project Settings.

#include "EndCharacter.h"


// Sets default values
AEndCharacter::AEndCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEndCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEndCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEndCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

