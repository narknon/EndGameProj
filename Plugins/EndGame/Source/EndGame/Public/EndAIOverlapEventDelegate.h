#pragma once
#include "CoreMinimal.h"
#include "EndAIOverlapEventDelegate.generated.h"

class AEndNavModifierVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndAIOverlapEvent, AEndNavModifierVolume*, InVolume);

