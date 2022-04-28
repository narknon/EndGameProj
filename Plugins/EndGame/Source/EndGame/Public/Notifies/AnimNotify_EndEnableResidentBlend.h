#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_EndEnableResidentBlend.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndEnableResidentBlend : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Enabled;
    
    UPROPERTY(EditAnywhere)
    FName Key;
    
    UPROPERTY(EditAnywhere)
    float BlendTime;
    
    UAnimNotify_EndEnableResidentBlend();
};

