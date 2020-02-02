// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IRepairableBase.h"
#include "GeneratorRepairable.generated.h"

/**
 * 
 */
class AWaterLevel;

UCLASS()
class GGJ20_API AGeneratorRepairable : public AIRepairableBase
{
	GENERATED_BODY()
	
public:
	AGeneratorRepairable();

	virtual void Tick(float DeltaTime) override;
	virtual void Break() override;
	virtual RepairTypes Repair() override;
	virtual void SignalRepairCompleted(bool successful) override;

	UPROPERTY(EditAnywhere)
		AWaterLevel* refToWater;
};
