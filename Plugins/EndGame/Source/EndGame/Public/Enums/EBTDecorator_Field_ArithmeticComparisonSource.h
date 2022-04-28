#pragma once
#include "CoreMinimal.h"
#include "EBTDecorator_Field_ArithmeticComparisonSource.generated.h"

UENUM()
enum class EBTDecorator_Field_ArithmeticComparisonSource : uint8 {
    Blackboard,
    ActorProperty,
    ActorFunction,
    LiteralValue,
    EBTDecorator_Field_MAX UMETA(Hidden),
};

