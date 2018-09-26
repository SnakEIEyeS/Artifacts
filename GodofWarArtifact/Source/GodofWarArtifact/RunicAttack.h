// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RunicAttack.generated.h"

UCLASS()
class GODOFWARARTIFACT_API ARunicAttack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARunicAttack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//virtual void ExecuteRunicAttack();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
