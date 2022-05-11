// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "KineDriverEd.h"
#include "KineDriverEdMode.h"

#define LOCTEXT_NAMESPACE "FKineDriverEdModule"

void FKineDriverEdModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FKineDriverEdMode>(FKineDriverEdMode::EM_KineDriverEdModeId, LOCTEXT("KineDriverEdModeName", "KineDriverEdMode"), FSlateIcon(), true);
}

void FKineDriverEdModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FKineDriverEdMode::EM_KineDriverEdModeId);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FKineDriverEdModule, KineDriverEd)