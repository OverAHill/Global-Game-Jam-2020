// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePlayer.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine.h"
#include "Engine/World.h"
#include "IRepairableBase.h"
#include "DefenseSystemRepairable.h"
#include "HullRepairable.h"
#include "Rivet.h"

// Sets default values
ABasePlayer::ABasePlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CurrentVelocity = FVector(0, 0, 0);

	PlayerFirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	PlayerFirstPersonCamera->SetupAttachment(this->GetRootComponent());
	PlayerFirstPersonCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 30.0f));

	currentTool = Tools::HAMMER;
	currentlyRepairing = false;
	cameraLocked = false;
}

// Called when the game starts or when spawned
void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!OnLadder)
	{
		if (!cameraLocked)
		{
			UpdatePlayerRotation();

			if (!movementLocked)
			{
				//Move
				AddMovementInput(PlayerFirstPersonCamera->GetForwardVector(), CurrentVelocity.Y * DeltaTime);
				AddMovementInput(PlayerFirstPersonCamera->GetRightVector(), CurrentVelocity.X * DeltaTime);
			}
			

			if (Crouched) //interpolate me you lazy bitch
			{
				PlayerFirstPersonCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 10.0f));
				this->SetActorScale3D(FVector(1.0f, 1.0f, 0.5f));
			}
			else
			{
				PlayerFirstPersonCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 30.0f));
				this->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
			}
		}
		else
		{

		}
	}
	else
	{
		AddMovementInput(PlayerFirstPersonCamera->GetUpVector(), CurrentVelocity.Y * DeltaTime);
		
		UpdatePlayerRotation();

		if (Crouched) //interpolate me you lazy bitch
		{
			PlayerFirstPersonCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 10.0f));
			this->SetActorScale3D(FVector(1.0f, 1.0f, 0.5f));
		}
		else
		{
			PlayerFirstPersonCamera->SetRelativeLocation(FVector(0.0f, 0.0f, 30.0f));
			this->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
		}
	}
}

void ABasePlayer::UpdatePlayerRotation()
{
	//Rotate
	FTransform t = PlayerFirstPersonCamera->GetRelativeTransform();
	FRotator r = t.GetRotation().Rotator();		//clamp me daddy
	//r.Yaw = FMath::Clamp(r.Yaw + CurrentRotation.X, -70.0f, 70.0f);
	r.Yaw += CurrentRotation.X;
	r.Pitch = FMath::Clamp(r.Pitch + CurrentRotation.Y, -60.0f, 60.0f);
	PlayerFirstPersonCamera->SetRelativeRotation(FRotator(r.Pitch, r.Yaw, 0));
}

// Called to bind functionality to input
void ABasePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &ABasePlayer::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &ABasePlayer::MoveRight);

	PlayerInputComponent->BindAxis("RotateVertical", this, &ABasePlayer::MoveCameraVer);
	PlayerInputComponent->BindAxis("RotateHorizontal", this, &ABasePlayer::MoveCameraHor);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ABasePlayer::Repair);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ABasePlayer::Jump);
	PlayerInputComponent->BindAxis("Crouch", this, &ABasePlayer::Crouch);

	PlayerInputComponent->BindAxis("ChangeTool", this, &ABasePlayer::ChangeTool);
	PlayerInputComponent->BindAction("SelectTool_1", IE_Pressed, this, &ABasePlayer::SelectTool1);
	PlayerInputComponent->BindAction("SelectTool_2", IE_Pressed, this, &ABasePlayer::SelectTool2);
	PlayerInputComponent->BindAction("SelectTool_3", IE_Pressed, this, &ABasePlayer::SelectTool3);
	PlayerInputComponent->BindAction("SelectTool_4", IE_Pressed, this, &ABasePlayer::SelectTool4);
}

void ABasePlayer::MoveForward(float value)
{
	CurrentVelocity.Y = 100 * value;
}


void ABasePlayer::MoveRight(float value)
{
	CurrentVelocity.X = 100 * value;
}

void ABasePlayer::MoveCameraVer(float value)
{
	CurrentRotation.Y = value;
}

void ABasePlayer::MoveCameraHor(float value)
{
	CurrentRotation.X = value;
}

void ABasePlayer::Repair()
{
	if (!currentlyRepairing)
	{
		FHitResult* hitResult = new FHitResult();
		FVector StartTrace = PlayerFirstPersonCamera->GetComponentLocation();
		FVector ForwardVector = PlayerFirstPersonCamera->GetForwardVector();
		FVector EndTrace = StartTrace + (ForwardVector * 5000);
		FCollisionQueryParams* TraceParams = new FCollisionQueryParams();

		if (GetWorld()->LineTraceSingleByChannel(*hitResult, StartTrace, EndTrace, ECC_Visibility, *TraceParams))
		{
			DrawDebugLine(GetWorld(), StartTrace, hitResult->Location, FColor(255, 0, 0), true);
			AActor* hitObject = hitResult->GetActor();
			AIRepairableBase* hitRepairable = Cast<AIRepairableBase>(hitObject);
			if (hitRepairable != nullptr)
			{
				RepairTypes repair = hitRepairable->Repair();
				switch (repair)
				{
				case RepairTypes::NOT_IMPLEMENTED:
					hitRepairable->SignalRepairCompleted(true);
					break;
				default:
					TryRepair(hitRepairable, (int)repair);
					break;

				}
			}
		}
	}
	else
	{
		if (currentTool == Tools::HAMMER)
		{
			ADefenseSystemRepairable* defense = Cast<ADefenseSystemRepairable>(currentRepairTarget);
			bool success = defense->HammerDown();
			defense->SignalRepairCompleted(success);
			currentlyRepairing = false;
			cameraLocked = false;
			movementLocked = false;
		}

		if (currentTool == Tools::RIVET_GUN)
		{
			FHitResult* hitResult = new FHitResult();
			FVector StartTrace = PlayerFirstPersonCamera->GetComponentLocation();
			FVector ForwardVector = PlayerFirstPersonCamera->GetForwardVector();
			FVector EndTrace = StartTrace + (ForwardVector * 5000);
			FCollisionQueryParams* TraceParams = new FCollisionQueryParams();

			if (GetWorld()->LineTraceSingleByChannel(*hitResult, StartTrace, EndTrace, ECC_Visibility, *TraceParams))
			{
				auto component = hitResult->GetActor();
				ARivet* hitSphere = Cast<ARivet>(component);
				if (hitSphere)
				{
					AHullRepairable* hull = Cast<AHullRepairable>(currentRepairTarget);
					//int fixedRivets = hull->HitRivets(hitSphere);
					hull->RepairRivet();
					int fixedRivets = hull->amountOfFixedRivets;

					if (fixedRivets >= 4)
					{
						hull->SignalRepairCompleted(true);
						currentlyRepairing = false;
						cameraLocked = false;
						movementLocked = false;
					}
				}
			}
		}
	}
}

void ABasePlayer::TryRepair(AIRepairableBase* repairable, int repairType)
{
	RepairTypes type = (RepairTypes)repairType;
	bool success = false;
	currentRepairTarget = repairable;
	switch (currentTool)
	{
	case Tools::FIRE_EX:
		success = (type == RepairTypes::DEFENSE_SYSTEM_REPAIR) ? true : false;
		currentRepairTarget->SignalRepairCompleted(success);
		movementLocked = true;
		break;

	case Tools::WELDER:
		currentlyRepairing = (type == RepairTypes::ENGINE_REPAIR) ? true : false;
		movementLocked = true;
		break;

	case Tools::RIVET_GUN:
		currentlyRepairing = (type == RepairTypes::HULL_REPAIR) ? true : false;
		cameraLocked = false;
		movementLocked = true;
		break;

	case Tools::HAMMER:
		currentlyRepairing = (type == RepairTypes::DEFENSE_SYSTEM_REPAIR) ? true : false;
		cameraLocked = true;
		movementLocked = true;
		break;
	default:
		currentRepairTarget->SignalRepairCompleted(false);
		break;
	}
}

void ABasePlayer::Jump()
{
	ACharacter::Jump();
}

void ABasePlayer::Crouch(float value)
{
	if (value > 0)
	{
		Crouched = true;
	}
	else
	{
		Crouched = false;
	}
}

void ABasePlayer::SetOnLadder(bool b)
{
	OnLadder = b;
	if (OnLadder)
	{
		this->GetCharacterMovement()->MovementMode = EMovementMode::MOVE_Flying;
	}
	else
	{
		this->GetCharacterMovement()->MovementMode = EMovementMode::MOVE_Walking;
	}
}

void ABasePlayer::ChangeTool(float value)
{
	int toolAsInt = (int)currentTool;
	toolAsInt += value;
	if (toolAsInt < 0)
	{
		toolAsInt = 3;
	}
	if (toolAsInt > 3)
	{
		toolAsInt = 0;
	}
	currentTool = (Tools)toolAsInt;
}

void ABasePlayer::SelectTool1()
{
	currentTool = (Tools)0;
}

void ABasePlayer::SelectTool2()
{
	currentTool = (Tools)1;
}

void ABasePlayer::SelectTool3()
{
	currentTool = (Tools)2;
}

void ABasePlayer::SelectTool4()
{
	currentTool = (Tools)3;
}