#pragma once
#include "CoreMinimal.h"
#include "EndBikeAILoccheBreakBridge.generated.h"

USTRUCT(BlueprintType)
struct FEndBikeAILoccheBreakBridge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitEffectName;
    
    ENDGAME_API FEndBikeAILoccheBreakBridge();
};

