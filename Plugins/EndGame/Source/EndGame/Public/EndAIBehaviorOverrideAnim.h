#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "EndAIBehaviorOverrideAnim.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorOverrideAnim : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName OverrideBehaviorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 OverrideAnimSetID;
    
    FEndAIBehaviorOverrideAnim();
};

