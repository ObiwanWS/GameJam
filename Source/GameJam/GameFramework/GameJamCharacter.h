// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <AbilitySystemInterface.h>
#include <GameFramework/Character.h>
#include "GameJamCharacter.generated.h"

class UAbilitySystemComponent;

UCLASS()
class GAMEJAM_API AGameJamCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGameJamCharacter();

	// Called every frame
	virtual void Tick(float deltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* playerInputComponent) override;

	// 
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	// 
	virtual void PossessedBy(AController* NewController) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = nullptr;
};
