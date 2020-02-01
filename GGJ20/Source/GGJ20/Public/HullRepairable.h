// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IRepairableBase.h"
#include "HullRepairable.generated.h"

/**
 * 
 */
UCLASS()
class GGJ20_API AHullRepairable : public AIRepairableBase
{
	GENERATED_BODY()

public:
	AHullRepairable();

	virtual void Tick(float DeltaTime) override;
	virtual void Break() override;
	virtual RepairTypes Repair() override;
	virtual void SignalRepairCompleted(bool successful) override;
};
