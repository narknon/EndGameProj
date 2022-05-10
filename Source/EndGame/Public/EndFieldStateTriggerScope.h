#pragma once
#include "CoreMinimal.h"
#include "EndFieldStateTriggerScope.generated.h"

UENUM()
enum class EndFieldStateTriggerScope {
    EndFieldStateTriggerScope_Self,
    EndFieldStateTriggerScope_Location,
    EndFieldStateTriggerScope_ResidentAndLocation,
    EndFieldStateTriggerScope_SpecificObject,
    EndFieldStateTriggerScope_Max,
};

