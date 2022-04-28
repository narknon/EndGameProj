#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndEmissiveCurveType.h"
#include "EEndEmissiveModifierType.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EndEmissiveAnimation.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndEmissiveAnimation : public UAnimNotify {
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
    float StartOffset;
    
    UPROPERTY(EditAnywhere)
    float EndOffset;
    
    UAnimNotify_EndEmissiveAnimation();
};

