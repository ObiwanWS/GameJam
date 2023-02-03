// Fill out your copyright notice in the Description page of Project Settings.

#include "GameJamCharacter.h"
#include <AbilitySystemComponent.h>

// Sets default values
AGameJamCharacter::AGameJamCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}

UAbilitySystemComponent* AGameJamCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AGameJamCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Start the ability system component
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

// Called when the game starts or when spawned
void AGameJamCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGameJamCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
}

// Called to bind functionality to input
void AGameJamCharacter::SetupPlayerInputComponent(UInputComponent* playerInputComponent)
{
	Super::SetupPlayerInputComponent(playerInputComponent);
}

