#pragma once
#include "CoreMinimal.h"
#include "EndAdjustOrientationWalkSetting.h"
#include "EndAdjustOrientationBehaviorSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAdjustOrientationBehaviorSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAdjustOrientationWalkSetting Walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAdjustOrientationWalkSetting Run;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAdjustOrientationWalkSetting Dash;
    
    FEndAdjustOrientationBehaviorSetting();
};

