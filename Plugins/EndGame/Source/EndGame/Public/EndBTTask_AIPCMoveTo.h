#pragma once
#include "CoreMinimal.h"
#include "EndBTTask_MoveTo.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTTask_AIPCMoveTo.generated.h"

UCLASS(Blueprintable)
class UEndBTTask_AIPCMoveTo : public UEndBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector MoveTargetBlackBoardKey;
    
    UEndBTTask_AIPCMoveTo();
};

