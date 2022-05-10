#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIControllerEnemyBase.h"
#include "BikeLoccheStateTriggerCondition.h"
#include "EBikeLoccheAttackType.h"
#include "EndBikeAILoccheBreakBridge.h"
#include "EndBikeAILoccheController.generated.h"

UCLASS(Blueprintable)
class AEndBikeAILoccheController : public AEndBikeAIControllerEnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateTriggerName_Sirius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlannerEventID_Sirius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateTriggerName_1stStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlannerEventID_1stStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateTriggerName_1stHitThunder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlannerEventID_1stHitThunder;
    
    UPROPERTY(EditAnywhere)
    float PlayerSpeed_ChangeToProvoke;
    
    UPROPERTY(EditAnywhere)
    float PlayerSpeed_ReturnToMelee;
    
    UPROPERTY(EditAnywhere)
    float Distance_ReturnToMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBikeLoccheStateTriggerCondition> ProvokeStateTriggerConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBikeLoccheAttackType InitialAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Melee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Smash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Shot;
    
    UPROPERTY(EditAnywhere)
    uint8 Num_Melee_Min;
    
    UPROPERTY(EditAnywhere)
    uint8 Num_Melee_Max;
    
    UPROPERTY(EditAnywhere)
    uint8 Num_Smash;
    
    UPROPERTY(EditAnywhere)
    uint8 Num_ShortRangeAttack_ToSideChange;
    
    UPROPERTY(EditAnywhere)
    float Distance_SideChangeOffset;
    
    UPROPERTY(EditAnywhere)
    float Time_ChangeToLongRange;
    
    UPROPERTY(EditAnywhere)
    float Distance_LongRange_Max;
    
    UPROPERTY(EditAnywhere)
    float RunSpeed_LongRange;
    
    UPROPERTY(EditAnywhere)
    float RunSpeed_LongRange_Damaged;
    
    UPROPERTY(EditAnywhere)
    float Distance_ChangeToShortRange;
    
    UPROPERTY(EditAnywhere)
    float Time_ChangeToShortRange;
    
    UPROPERTY(EditAnywhere)
    float Rate_ChangeToPhase2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlannerEventID_Opening;
    
    UPROPERTY(EditAnywhere)
    float DamageRatio_DelayingPhase2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Melee2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Smash2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Provoke;
    
    UPROPERTY(EditAnywhere)
    uint8 Num_Melee_Min_P2;
    
    UPROPERTY(EditAnywhere)
    uint8 Num_Melee_Max_P2;
    
    UPROPERTY(EditAnywhere)
    uint8 Num_Smash_P2;
    
    UPROPERTY(EditAnywhere)
    uint8 Num_ShortRangeAttack_ToSideChange_P2;
    
    UPROPERTY(EditAnywhere)
    float RunSpeed_Phase2;
    
    UPROPERTY(EditAnywhere)
    float Distance_Phase2_Max;
    
    UPROPERTY(EditAnywhere)
    float Time_ChangeToStamp;
    
    UPROPERTY(EditAnywhere)
    float Distance_BeforeStamp;
    
    UPROPERTY(EditAnywhere)
    float RelativeSpeed_BeforeStamp;
    
    UPROPERTY(EditAnywhere)
    float InterpSpeed_RollBeforeStamp;
    
    UPROPERTY(EditAnywhere)
    float MaxAngle_RollBeforeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> DamageSourceReplaceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndBikeAILoccheBreakBridge> BreakBridgeParams;
    
public:
    AEndBikeAILoccheController();
};

