#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EEndEmissiveCurveType.h"
#include "EEndEmissiveModifierType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_EndEmissiveAnimationRange.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ENDGAME_API UAnimNotify_EndEmissiveAnimationRange : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ColorPaletteId;
    
    UPROPERTY(EditAnywhere)
    EEndEmissiveModifierType Modifier;
    
    UPROPERTY(EditAnywhere)
    EEndEmissiveCurveType Curve;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bCallStopOnEnd;
    
    UAnimNotify_EndEmissiveAnimationRange();
};

