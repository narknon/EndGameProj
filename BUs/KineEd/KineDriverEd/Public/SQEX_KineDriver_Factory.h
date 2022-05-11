// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "SQEX_KineDriver_Factory.generated.h"

/**
 * 
 */
UCLASS()
class KINEDRIVERED_API USQEX_KineDriver_Factory : public UFactory
{
	GENERATED_BODY()
public:
	USQEX_KineDriver_Factory();
	
	virtual UObject* FactoryCreateNew(UClass* InClass,
		UObject* InParent, FName InName, EObjectFlags Flags,
		UObject* Context, FFeedbackContext* Warn, FName
		CallingContext) override;
	
	
};
