#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "EndBTTask_Field_LookAtTarget.generated.h"

UCLASS(Blueprintable)
class UEndBTTask_Field_LookAtTarget : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForce;
    
    UPROPERTY(EditAnywhere)
    float m_LookAtInterval;
    
    UPROPERTY(EditAnywhere)
    float m_LookAtIntervalRand;
    
    UPROPERTY(EditAnywhere)
    float m_LookAtDisableInterval;
    
    UEndBTTask_Field_LookAtTarget();
};

