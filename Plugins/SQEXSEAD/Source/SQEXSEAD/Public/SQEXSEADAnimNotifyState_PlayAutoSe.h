#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SQEXSEADAnimNotifyState_PlayAutoSe.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SQEXSEAD_API USQEXSEADAnimNotifyState_PlayAutoSe : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADAnimNotifyPlayAutoSeParams PlaySettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutDuration;
    
    USQEXSEADAnimNotifyState_PlayAutoSe();
};

