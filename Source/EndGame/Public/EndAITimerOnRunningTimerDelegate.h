#pragma once
#include "CoreMinimal.h"
#include "EndAITimerOnRunningTimerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEndAITimerOnRunningTimer, float, Current, float, Max, float, Progress, FName, InName);

