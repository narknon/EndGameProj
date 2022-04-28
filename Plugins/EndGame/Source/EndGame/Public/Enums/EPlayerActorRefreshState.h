#pragma once
#include "CoreMinimal.h"
#include "EPlayerActorRefreshState.generated.h"

UENUM()
enum class EPlayerActorRefreshState : uint8 {
    EPlayerActorRefreshState_NONE,
    EPlayerActorRefreshState_BUILD,
    EPlayerActorRefreshState_REBUILD,
    EPlayerActorRefreshState_DELETE,
};

