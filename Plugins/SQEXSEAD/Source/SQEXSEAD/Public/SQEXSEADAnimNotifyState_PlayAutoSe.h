#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "SQEXSEADAnimNotifyPlayAutoSeParams.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEXSEADAnimNotifyState_PlayAutoSe.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SQEXSEAD_API USQEXSEADAnimNotifyState_PlayAutoSe : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAnimNotifyPlayAutoSeParams PlaySettings;
    
    UPROPERTY(EditAnywhere)
    float FadeOutDuration;
    
    USQEXSEADAnimNotifyState_PlayAutoSe();
};

