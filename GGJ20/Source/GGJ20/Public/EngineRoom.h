// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseRoom.h"
#include "EngineRoom.generated.h"

class AEngineRepairable;
/**
 * 
 */
UCLASS()
class GGJ20_API AEngineRoom : public ABaseRoom
{
	GENERATED_BODY()

public:
	AEngineRoom();
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EngineRoom")
		AEngineRepairable* Engine;
};
