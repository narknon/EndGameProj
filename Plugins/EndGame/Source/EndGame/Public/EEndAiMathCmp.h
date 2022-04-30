#pragma once
#include "CoreMinimal.h"
#include "EEndAiMathCmp.generated.h"

UENUM()
enum class EEndAiMathCmp : uint8 {
    Equal,
    Less,
    LessEqual,
    Greater,
    GreaterEqual,
    NotEqual,
};

