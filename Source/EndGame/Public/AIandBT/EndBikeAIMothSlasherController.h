#pragma once
#include "CoreMinimal.h"
#include "BikeCutterStormAbilitySetting.h"
#include "EndBikeAIControllerEnemyBase.h"
#include "EBikeMothSlasherAttackType.h"
#include "EndBikeAIMothSlasherController.generated.h"

UCLASS(Blueprintable)
class AEndBikeAIMothSlasherController : public AEndBikeAIControllerEnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBikeMothSlasherAttackType InitialAttackType;
    
    UPROPERTY(EditAnywhere)
    uint8 AbilityCount_DoCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Charge;
    
    UPROPERTY(EditAnywhere)
    uint8 ChargeCount_DoDischarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Discharge;
    
    UPROPERTY(EditAnywhere)
    float HitPointRate_ChangeToPhase2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionID_ChangeToPhase2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BreakMeshID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BreakMeshStateLabel_After;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BrokenEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BrokenEffectSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunAhead;
    
    UPROPERTY(EditAnywhere)
    float KeepTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableArmsPushCollision;
    
    UPROPERTY(EditAnywhere)
    float HitPointRate_CutterStorm2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBikeCutterStormAbilitySetting> CutterStormSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBikeCutterStormAbilitySetting> CutterStormSettings2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DrillAbilityID_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DrillAbilityID_Long;
    
    UPROPERTY(EditAnywhere)
    uint8 DrillAbilityCount_ReplaceToLong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Unbalance_Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionID_Unbalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkTriggerSetID_Guarded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MufflerEffectSettings;
    
public:
    AEndBikeAIMothSlasherController();
};

