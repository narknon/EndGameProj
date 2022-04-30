#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EndBTTask_FindGroundLocation.generated.h"

UCLASS(Blueprintable)
class UEndBTTask_FindGroundLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroundLocationBlackBoardName;
    
    UEndBTTask_FindGroundLocation();
};

