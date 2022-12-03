#pragma once
#include "CoreMinimal.h"
#include "EndAIBehavior.h"
#include "UObject/NoExportTypes.h"
#include "EndAIBehaviorDirectMoveTimer.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAIBehaviorDirectMoveTimer : public FEndAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
    FEndAIBehaviorDirectMoveTimer();
};

