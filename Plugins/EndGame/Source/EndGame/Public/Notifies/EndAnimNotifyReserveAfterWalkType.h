#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndAnimWalkType.h"
#include "EndAnimNotifyReserveAfterWalkType.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyReserveAfterWalkType : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndAnimWalkType AfterWalkType;
    
    UPROPERTY(EditAnywhere)
    float AfterLimitedRunningTimer;
    
    UEndAnimNotifyReserveAfterWalkType();
};

