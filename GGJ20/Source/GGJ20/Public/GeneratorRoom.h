// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseRoom.h"
#include "GeneratorRoom.generated.h"

class AGeneratorRepairable;
/**
 * 
 */
UCLASS()
class GGJ20_API AGeneratorRoom : public ABaseRoom
{
	GENERATED_BODY()

public:
	AGeneratorRoom();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GeneratorRoom")
		AGeneratorRepairable* Generator;
};
