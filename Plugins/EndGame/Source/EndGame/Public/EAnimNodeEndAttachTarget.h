#pragma once
#include "CoreMinimal.h"
#include "EAnimNodeEndAttachTarget.generated.h"

UENUM()
enum class EAnimNodeEndAttachTarget : uint8 {
    Self,
    OwnerCharacter,
    OwnerParentCharacter,
};

