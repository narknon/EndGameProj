#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADChangeAutoSeEnableNotifyEndBehavior.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEXSEADAnimNotifyState_ChangeAutoSeEnable.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SQEXSEAD_API USQEXSEADAnimNotifyState_ChangeAutoSeEnable : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableAutoSeEnableParameters: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableSetting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESQEXSEADChangeAutoSeEnableNotifyEndBehavior NotifyEndBehavior;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableContinuousDisabling: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bEnableMotionDetectFilters: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bMotionDetectFilterAsGlobal: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAutoSeMotionSoundFilter MSFilter;
    
    USQEXSEADAnimNotifyState_ChangeAutoSeEnable();
};

