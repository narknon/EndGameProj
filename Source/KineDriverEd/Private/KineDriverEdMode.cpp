// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "KineDriverEdMode.h"
#include "KineDriverEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"

const FEditorModeID FKineDriverEdMode::EM_KineDriverEdModeId = TEXT("EM_KineDriverEdMode");

FKineDriverEdMode::FKineDriverEdMode()
{

}

FKineDriverEdMode::~FKineDriverEdMode()
{

}

void FKineDriverEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FKineDriverEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FKineDriverEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FKineDriverEdMode::UsesToolkits() const
{
	return true;
}




