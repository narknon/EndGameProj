#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "EndBTTask_Field_TurnTo.generated.h"

UCLASS(Blueprintable)
class UEndBTTask_Field_TurnTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Tolerance;
    
    UPROPERTY(EditAnywhere)
    float m_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTurnContextRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRequestOnce;
    
    UEndBTTask_Field_TurnTo();
};

