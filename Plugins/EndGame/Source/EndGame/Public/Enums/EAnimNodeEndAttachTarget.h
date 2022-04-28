#pragma once
#include "CoreMinimal.h"
#include "EAnimNodeEndAttachTarget.generated.h"

UENUM()
enum class EAnimNodeEndAttachTarget {
    Self,
    OwnerCharacter,
    OwnerParentCharacter,
};

