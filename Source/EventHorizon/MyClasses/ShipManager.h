// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShipManager.generated.h"

UCLASS()
class EVENTHORIZON_API AShipManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShipManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Components Connected Status")
	bool isFusionGeneratorConnected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Components Connected Status")
	bool isBackupGeneratorConnected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Components Connected Status")
	bool isShieldGeneratorConnected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Components Connected Status")
	bool isWeaponHardpointOneEmpty = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Components Connected Status")
	bool isWeaponHardpointTwoEmpty = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Components Connected Status")
	bool isWeaponHardpointThreeEmpty = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Components Connected Status")
	bool isWeaponHardpointFourEmpty = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Components Connected Status")
	bool isThrusterOneConnected = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Base Components Connected Status")
	bool isThrusterTwoConnected = false;
	
};
