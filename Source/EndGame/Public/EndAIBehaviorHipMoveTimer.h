#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "UObject/NoExportTypes.h"
#include "EndAIBehaviorHipMoveTimer.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorHipMoveTimer : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    FEndAIBehaviorHipMoveTimer();
};

