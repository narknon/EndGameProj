#pragma once
#include "CoreMinimal.h"
#include "ECommandType.generated.h"

UENUM()
enum class ECommandType {
    ECommandType_ABILITY,
    ECommandType_MAGIC,
    ECommandType_LIMIT,
    ECommandType_SUMMON,
    ECommandType_ITEM,
};

