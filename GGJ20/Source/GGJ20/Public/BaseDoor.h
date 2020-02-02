// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseDoor.generated.h"

class UBoxComponent;

UCLASS()
class GGJ20_API ABaseDoor : public AActor
{
	GENERATED_BODY()


public:	
	UPROPERTY(EditAnywhere)
		UBoxComponent* BoxCollider;

	UPROPERTY(EditAnywhere)
		AActor* leftDoor;
	UPROPERTY(EditAnywhere)
		AActor* rightDoor;
	UPROPERTY(EditAnywhere)
		float openWidth;
	UPROPERTY(EditAnywhere)
		FVector leftDoorStartPosition;
	UPROPERTY(EditAnywhere)
		FVector rightDoorStartPosition;
	UPROPERTY(EditAnywhere, BlueprintReadonly)
		bool isOpen;

	// Sets default values for this actor's properties
	ABaseDoor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Doors")
		void Open();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Lights")
		void Close();

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
