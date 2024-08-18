// Fill out your copyright notice in the Description page of Project Settings.
/*
 * Programmer:				Ahmed Hammoud
 * Date:					May 2022
 * Class Description:		Base class for ship components that will define variables that the ship components can inherit. 
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShipComponent.generated.h"

UCLASS()
class EVENTHORIZON_API AShipComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShipComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component Status",meta=(AllowPrivateAccess = "true"))
	bool isMalfunctioning = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component Status",meta=(AllowPrivateAccess = "true"))
	bool isDestroyed = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component Status",meta=(AllowPrivateAccess = "true"))
	float health;

	//Read Only. Read through wrapped getter function.
	const float maxHealth = 100;

public:

	UFUNCTION(BlueprintCallable)
	float GetMaxHealth()  const { return maxHealth; }
	
	
};
