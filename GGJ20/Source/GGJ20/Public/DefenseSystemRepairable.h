// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IRepairableBase.h"
#include "DefenseSystemRepairable.generated.h"

/**
 * 
 */
UCLASS()
class GGJ20_API ADefenseSystemRepairable : public AIRepairableBase
{
	GENERATED_BODY()

public:
	ADefenseSystemRepairable();

	virtual void Break() override;
	virtual RepairTypes Repair() override;
	virtual void SignalRepairCompleted(bool successful) override;
};
