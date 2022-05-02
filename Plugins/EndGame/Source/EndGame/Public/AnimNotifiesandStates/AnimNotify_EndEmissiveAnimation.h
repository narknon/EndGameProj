#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EEndEmissiveCurveType.h"
#include "EEndEmissiveModifierType.h"
#include "AnimNotify_EndEmissiveAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UAnimNotify_EndEmissiveAnimation : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorPaletteId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndEmissiveModifierType Modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

