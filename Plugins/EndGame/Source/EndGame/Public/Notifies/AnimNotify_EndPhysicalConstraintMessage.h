#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EEndPhysicalConstraintMessage.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EndPhysicalConstraintMessage.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndPhysicalConstraintMessage : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEndPhysicalConstraintMessage Message;
    
    UPROPERTY(EditAnywhere)
    float Parameter0;
    
    UAnimNotify_EndPhysicalConstraintMessage();
};

