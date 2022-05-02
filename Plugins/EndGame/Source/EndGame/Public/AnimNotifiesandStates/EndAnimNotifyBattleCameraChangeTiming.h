#pragma once
#include "CoreMinimal.h"
#include "EEndNotifyBattleCameraChangeTimingType.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EndAnimNotifyBattleCameraChangeTiming.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleCameraChangeTiming : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndNotifyBattleCameraChangeTimingType ChangeTimingType;
    
    UEndAnimNotifyBattleCameraChangeTiming();
};

