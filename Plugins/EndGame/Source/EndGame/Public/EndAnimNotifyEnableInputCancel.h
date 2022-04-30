#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EEndAnimWalkType.h"
#include "EndAnimNotifyEnableInputCancel.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UEndAnimNotifyEnableInputCancel : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAnimWalkType AfterWalkType;
    
    UPROPERTY(EditAnywhere)
    float AfterLimitedRunningTimer;
    
    UEndAnimNotifyEnableInputCancel();
};

