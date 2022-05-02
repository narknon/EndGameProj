#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EndBTDecorator_CheckConditionBase.h"
#include "EEndAiMathCmp.h"
#include "EndBTDecorator_Field_SensingMember.generated.h"

UCLASS(Blueprintable)
class UEndBTDecorator_Field_SensingMember : public UEndBTDecorator_CheckConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseSourceToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_SourceToTarget;
    
    UPROPERTY(EditAnywhere)
    float m_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAiMathCmp m_ArithmeticOperation_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseBodyRadius;
    
    UPROPERTY(EditAnywhere)
    float m_Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndAiMathCmp m_ArithmeticOperation_Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAbs_Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLeaderOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckHeight;
    
    UPROPERTY(EditAnywhere)
    float m_Height;
    
    UEndBTDecorator_Field_SensingMember();
};

