#pragma once
#include "CoreMinimal.h"
#include "EEndAiMathCmp.generated.h"

UENUM(Blueprintable)
enum class EEndAiMathCmp : uint8 {
    Equal,
    Less,
    LessEqual,
    Greater,
    GreaterEqual,
    NotEqual,
};

