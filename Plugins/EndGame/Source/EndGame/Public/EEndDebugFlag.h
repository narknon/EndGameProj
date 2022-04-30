#pragma once
#include "CoreMinimal.h"
#include "EEndDebugFlag.generated.h"

UENUM()
enum class EEndDebugFlag : uint8 {
    IgnoreLocationDataTable,
    EntryLocationFieldTest,
    EntryLocationBattleTest,
    EntryLocationBegining,
    EncountLogOutput,
    BeginEntryLocationUnInitSaveData,
    SingleLocationUmap,
    ScenarioDebug,
};

