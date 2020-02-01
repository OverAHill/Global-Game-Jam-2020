// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILightControllerBase.generated.h"

class UPointLightComponent;

UCLASS()
class GGJ20_API AILightControllerBase : public AActor
{
	GENERATED_BODY()
	

protected:
	bool m_IsOn;
	bool m_IsFlashing;
	float m_FlashInterval;
	float m_TimeSineLastFlash;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Flash(float deltaTime);


public:	
	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Lights")
		UPointLightComponent* m_light;

	// Sets default values for this actor's properties
	AILightControllerBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void StartFlashing(float interval);
	void StopFlashing();
	void Toggle();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Lights")
		void TurnOff();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Lights")
		void TurnOn();

};
