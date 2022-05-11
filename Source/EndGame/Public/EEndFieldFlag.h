#pragma once
#include "CoreMinimal.h"
#include "EEndFieldFlag.generated.h"

UENUM(BlueprintType)
enum class EEndFieldFlag : uint8 {
    ActionStartChapter,
    StartUninitParsistant,
    LocationJumpBlack,
    UseMenuChapterSelect,
    LocationJumpToCutScene,
    ExecuteActionCutScene,
};

