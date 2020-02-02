// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseRoom.h"
#include "DefenceRoom.generated.h"

class ADefenseSystemRepairable;
/**
 * 
 */
UCLASS()
class GGJ20_API ADefenceRoom : public ABaseRoom
{
	GENERATED_BODY()
public:
	ADefenceRoom();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DefenceRoom")
		ADefenseSystemRepairable* DefenseSystem;
};
