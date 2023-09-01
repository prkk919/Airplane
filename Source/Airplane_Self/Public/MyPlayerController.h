// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AIRPLANE_SELF_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	//called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	//called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputMappingContext* DefaultMappingContext;
};
