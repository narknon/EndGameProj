#pragma once
#include "CoreMinimal.h"
#include "EAnimNodeEndAttachTarget.generated.h"

UENUM(BlueprintType)
enum class EAnimNodeEndAttachTarget : uint8 {
    Self,
    OwnerCharacter,
    OwnerParentCharacter,
};

