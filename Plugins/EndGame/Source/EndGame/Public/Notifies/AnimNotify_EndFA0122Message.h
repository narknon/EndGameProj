#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EFA0122_ArmMessage.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_EndFA0122Message.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UAnimNotify_EndFA0122Message : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFA0122_ArmMessage Message;
    
    UAnimNotify_EndFA0122Message();
};

