// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Flag.h"
#include "MainFlag.generated.h"

/**
 * 
 */
UCLASS()
class GAME259A_API AMainFlag : public AFlag
{
	GENERATED_BODY()

public:


protected:
	//Flag pickup when the capsule overlaps with the player(OtherActor)

	void PickUp_Implementation(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	void Drop_Implementation() override;

	UFUNCTION()
	void ReserveFlag();
	
};


