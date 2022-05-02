#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EConfrontType.h"
#include "EndBTDecorator_AIPCSetConfrontDistance.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_AIPCSetConfrontDistance : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConfrontType ConfrontType;
    
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UEndBTDecorator_AIPCSetConfrontDistance();
};

