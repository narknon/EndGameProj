#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndNotifyBattleCameraChangeTimingType.h"
#include "EndAnimNotifyBattleCameraChangeTiming.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyBattleCameraChangeTiming : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndNotifyBattleCameraChangeTimingType ChangeTimingType;
    
    UEndAnimNotifyBattleCameraChangeTiming();
};

