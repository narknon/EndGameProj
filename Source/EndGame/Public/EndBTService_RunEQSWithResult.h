#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTService_RunEQSWithResult.generated.h"

UCLASS(Blueprintable)
class UEndBTService_RunEQSWithResult : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector QueryResultBlackboardKey;
    
public:
    UEndBTService_RunEQSWithResult();
};

