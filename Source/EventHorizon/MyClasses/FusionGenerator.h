// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShipComponent.h"
#include "FusionGenerator.generated.h"

/**
 * 
 */
UCLASS()
class EVENTHORIZON_API AFusionGenerator : public AShipComponent
{
	GENERATED_BODY()
public:
	AFusionGenerator();
	
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power Management", meta=(AllowPrivateAccess = "true"))
	bool isPowerOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power Management", meta=(AllowPrivateAccess = "true"))
	float shipPowerConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power Management", meta=(AllowPrivateAccess = "true"))
	float reactorPowerThreshold;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power Management", meta=(AllowPrivateAccess = "true"))
	float reactorTemperatureThreshold;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power Management", meta=(AllowPrivateAccess = "true"))
	float reactorCurrentTemperature;
	
	
};
