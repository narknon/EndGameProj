#pragma once
#include "CoreMinimal.h"
#include "EndSwitchingAnimStatus.generated.h"

UENUM()
enum class EndSwitchingAnimStatus {
    EndSwitchingAnimStatus_Outer,
    EndSwitchingAnimStatus_Inner,
    EndSwitchingAnimStatus_OuterInner,
    EndSwitchingAnimStatus_InnerOuter,
    EndSwitchingAnimStatus_Max,
};

