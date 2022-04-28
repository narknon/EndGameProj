// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "EndMenuViewport.generated.h"

class UWorld;
class AActor;

UCLASS()
class ENDGAME_API UEndMenuViewport : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FLinearColor BackgroundColor;

	UEndMenuViewport();
	UFUNCTION(BlueprintCallable)
		AActor* Spawn(TSubclassOf<AActor> ActorClass);

	UFUNCTION(BlueprintCallable)
		void SetViewRotation(FRotator Rotation);

	UFUNCTION(BlueprintCallable)
		void SetViewLocation(FVector Location);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		FRotator GetViewRotation() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		UWorld* GetViewportWorld() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		FVector GetViewLocation() const;
	
	
	
};
