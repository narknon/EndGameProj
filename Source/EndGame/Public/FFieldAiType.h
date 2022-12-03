#pragma once
#include "CoreMinimal.h"
#include "FFieldAiType.generated.h"

UENUM(BlueprintType)
enum class FFieldAiType : uint8 {
    FFieldAiType_EMPTY,
    FFieldAiType_NONE,
    FFieldAiType_STAY,
    FFieldAiType_FOLLOW_TARGET,
    FFieldAiType_FOLLOW_POSITION,
    FFieldAiType_ANIMATION,
    FFieldAiType_SINGLE_ANIMATION,
    FFieldAiType_LEAD,
    FFieldAiType_ESCAPE_POSITION,
    FFieldAiType_WANDERING,
    FFieldAiType_PATROL,
    FFieldAiType_ACCOMPANY,
    FFieldAiType_INTEREST,
    FFieldAiType_UNIQUE,
};

