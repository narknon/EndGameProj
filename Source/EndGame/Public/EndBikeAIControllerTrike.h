#pragma once
#include "CoreMinimal.h"
#include "EndBikeAIControllerAllyBase.h"
#include "EBikeDirection.h"
#include "BikeTrikeStateTriggerData.h"
#include "BikeAllyAbilityList.h"
#include "BikeAIControllerTrikeSpecialAttackParameter.h"
#include "BikeTrikeRandomIdleGestureParam.h"
#include "EndBikeAIControllerTrike.generated.h"

UCLASS(Blueprintable)
class AEndBikeAIControllerTrike : public AEndBikeAIControllerAllyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDistanceRange_Min_Enemies_InTruckBattle0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDistanceRange_Min_Enemies_InSoldier3rdBattle0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDistanceRange_Min_Enemies_InSoldier3rdBattle1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBikeTrikeStateTriggerData> StateTriggerList_AttackedBySoldier3rd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateTriggerTime_AttackedBySoldier3rd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBikeTrikeStateTriggerData> StateTriggerList_OnDeadSoldier3rd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBikeDirection, FBikeAllyAbilityList> SpecialAbilitySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialAbilityValidMinMileage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeAIControllerTrikeSpecialAttackParameter mSpecialAttackParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialAttackDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeTrikeRandomIdleGestureParam mRandomIdleGestureParam;
    
public:
    AEndBikeAIControllerTrike();
};

