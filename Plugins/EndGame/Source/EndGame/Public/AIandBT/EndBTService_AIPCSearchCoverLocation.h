#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTService_AIPCSearchCoverLocation.generated.h"

UCLASS(Blueprintable)
class UEndBTService_AIPCSearchCoverLocation : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CoverLocationBlackboardKey;
    
    UEndBTService_AIPCSearchCoverLocation();
};

