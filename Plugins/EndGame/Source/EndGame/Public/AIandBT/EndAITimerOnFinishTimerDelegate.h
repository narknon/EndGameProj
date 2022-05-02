#pragma once
#include "CoreMinimal.h"
#include "EndAITimerOnFinishTimerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndAITimerOnFinishTimer, FName, InName);

