// Fill out your copyright notice in the Description page of Project Settings.
#include "SQEX_KineDriver_Factory.h"
#include "Factories/Factory.h"
#include "SQEX_KineDriverData.h"



USQEX_KineDriver_Factory::USQEX_KineDriver_Factory()
	:Super()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = USQEX_KineDriverData::StaticClass();
}

UObject* USQEX_KineDriver_Factory::FactoryCreateNew(UClass*
	InClass, UObject* InParent, FName InName, EObjectFlags
	Flags, UObject* Context, FFeedbackContext* Warn, FName
	CallingContext)
{
	auto NewObjectAsset = NewObject<USQEX_KineDriverData>(InParent,
		InClass, InName, Flags);
	return NewObjectAsset;
}


