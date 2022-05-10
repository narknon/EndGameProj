// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "KineDriverEdEdMode.h"
#include "KineDriverEdEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"

const FEditorModeID FKineDriverEdEdMode::EM_KineDriverEdEdModeId = TEXT("EM_KineDriverEdEdMode");

FKineDriverEdEdMode::FKineDriverEdEdMode()
{

}

FKineDriverEdEdMode::~FKineDriverEdEdMode()
{

}

void FKineDriverEdEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FKineDriverEdEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FKineDriverEdEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FKineDriverEdEdMode::UsesToolkits() const
{
	return true;
}




