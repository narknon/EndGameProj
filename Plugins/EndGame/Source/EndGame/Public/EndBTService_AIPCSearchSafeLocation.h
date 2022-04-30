#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTService_AIPCSearchSafeLocation.generated.h"

UCLASS(Blueprintable)
class UEndBTService_AIPCSearchSafeLocation : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SafeLocationBlackboardKey;
    
    UEndBTService_AIPCSearchSafeLocation();
};

