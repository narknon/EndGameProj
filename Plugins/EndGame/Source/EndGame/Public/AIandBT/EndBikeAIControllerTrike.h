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
    UPROPERTY(EditAnywhere)
    float MoveDistanceRange_Min_Enemies_InTruckBattle0;
    
    UPROPERTY(EditAnywhere)
    float MoveDistanceRange_Min_Enemies_InSoldier3rdBattle0;
    
    UPROPERTY(EditAnywhere)
    float MoveDistanceRange_Min_Enemies_InSoldier3rdBattle1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBikeTrikeStateTriggerData> StateTriggerList_AttackedBySoldier3rd;
    
    UPROPERTY(EditAnywhere)
    float StateTriggerTime_AttackedBySoldier3rd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBikeTrikeStateTriggerData> StateTriggerList_OnDeadSoldier3rd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBikeDirection, FBikeAllyAbilityList> SpecialAbilitySetting;
    
    UPROPERTY(EditAnywhere)
    float SpecialAbilityValidMinMileage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeAIControllerTrikeSpecialAttackParameter mSpecialAttackParameter;
    
    UPROPERTY(EditAnywhere)
    float SpecialAttackDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeTrikeRandomIdleGestureParam mRandomIdleGestureParam;
    
public:
    AEndBikeAIControllerTrike();
};

