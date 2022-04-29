#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AlphaBlend.h"
#include "EndAnimStructs.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAlphaBlendOption -FallbackName=EAlphaBlendOption
#include "EndAnimNotifyStateOverrideCameraParams.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UEndAnimNotifyStateOverrideCameraParams : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEndFieldCameraOverrideParam OverrideParameters;
    
    UPROPERTY(EditAnywhere)
    bool bBeginBlend;
    
    UPROPERTY(EditAnywhere)
    EAlphaBlendOption BeginBlendOption;
    
    UPROPERTY(EditAnywhere)
    float BeginBlendTime;
    
    UPROPERTY(EditAnywhere)
    bool bEndBlend;
    
    UPROPERTY(EditAnywhere)
    EAlphaBlendOption EndBlendOption;
    
    UPROPERTY(EditAnywhere)
    float EndBlendTime;
    
    UEndAnimNotifyStateOverrideCameraParams();
};

