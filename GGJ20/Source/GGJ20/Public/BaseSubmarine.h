// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseSubmarine.generated.h"

class ABaseRoom;

UCLASS()
class GGJ20_API ABaseSubmarine : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, Category="Rooms")
		TArray<ABaseRoom*> rooms;

	// Sets default values for this actor's properties
	ABaseSubmarine();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
