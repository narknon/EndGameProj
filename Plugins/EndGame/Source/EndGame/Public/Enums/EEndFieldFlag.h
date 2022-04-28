#pragma once
#include "CoreMinimal.h"
#include "EEndFieldFlag.generated.h"

UENUM()
enum class EEndFieldFlag {
    ActionStartChapter,
    StartUninitParsistant,
    LocationJumpBlack,
    UseMenuChapterSelect,
    LocationJumpToCutScene,
    ExecuteActionCutScene,
};

