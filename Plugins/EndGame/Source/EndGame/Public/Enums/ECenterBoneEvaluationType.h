#pragma once
#include "CoreMinimal.h"
#include "ECenterBoneEvaluationType.generated.h"

UENUM()
enum class ECenterBoneEvaluationType {
    TranslationAndRotation,
    Translation,
    Rotation,
    Ignore,
};

