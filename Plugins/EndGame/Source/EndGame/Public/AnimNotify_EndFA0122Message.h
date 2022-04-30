#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EFA0122_ArmMessage.h"
#include "AnimNotify_EndFA0122Message.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UAnimNotify_EndFA0122Message : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFA0122_ArmMessage Message;
    
    UAnimNotify_EndFA0122Message();
};

