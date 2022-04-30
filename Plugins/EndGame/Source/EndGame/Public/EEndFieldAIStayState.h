#pragma once
#include "CoreMinimal.h"
#include "EEndFieldAIStayState.generated.h"

UENUM()
enum class EEndFieldAIStayState {
    STATE_WAIT,
    STATE_RETURN,
    STATE_CINEMAMOVE,
    STATE_CINEMARETURN,
    STATE_CINEMATURN,
    STATE_MAX UMETA(Hidden),
};

