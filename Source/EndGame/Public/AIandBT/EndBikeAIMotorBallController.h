#pragma once
#include "CoreMinimal.h"
#include "EBikeMotorBallClimaxBehavior.h"
#include "EndBikeAIControllerEnemyBase.h"
#include "BikeBreakablePartInfo.h"
#include "BikeBarrierPartsSetting.h"
#include "BikeCannonAbilitySetting.h"
#include "BikeRegenerationSetting.h"
#include "EndBikeAIMotorBallController.generated.h"

UCLASS(Blueprintable)
class AEndBikeAIMotorBallController : public AEndBikeAIControllerEnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeBreakablePartInfo Part_Right_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeBreakablePartInfo Part_Right_Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeBreakablePartInfo Part_Right_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeBreakablePartInfo Part_Left_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeBreakablePartInfo Part_Left_Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeBreakablePartInfo Part_Left_Back;
    
    UPROPERTY(EditAnywhere)
    float PenetrateDamageRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DownMotionID_Begin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DownMotionID_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DownMotionID_End;
    
    UPROPERTY(EditAnywhere)
    float DownTime;
    
    UPROPERTY(EditAnywhere)
    float RelativeSpeedRate_Down;
    
    UPROPERTY(EditAnywhere)
    uint8 RepairPartsNum;
    
    UPROPERTY(EditAnywhere)
    TMap<float, uint8> RepairPartsNumSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkTriggerSetID_BeginChase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkTriggerSetID_OnBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkTriggerSetID_BeginDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkTriggerSetID_BeginBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkTriggerSetID_BeginRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkTriggerSetID_OnHitBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_Enable_Draw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_Disable_LookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Debug_Disable_Aim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BackRun_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimSetID_BackRun;
    
    UPROPERTY(EditAnywhere)
    TMap<float, uint8> TimeAndOdds_ToBackRun;
    
    UPROPERTY(EditAnywhere)
    TMap<float, uint8> TimeAndOdds_ToForwardRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TurnMotionID_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TurnMotionID_Left;
    
    UPROPERTY(EditAnywhere)
    float Distance_Forward_Limit;
    
    UPROPERTY(EditAnywhere)
    float MovableArea_Triangle_Top;
    
    UPROPERTY(EditAnywhere)
    float MovableArea_Triangle_Rate;
    
    UPROPERTY(EditAnywhere)
    float SlideLimit;
    
    UPROPERTY(EditAnywhere)
    float SlideSpeed;
    
    UPROPERTY(EditAnywhere)
    float Distance_Right_Threshold_UI;
    
    UPROPERTY(EditAnywhere)
    float Opacity_UI;
    
    UPROPERTY(EditAnywhere)
    float HitPointRate_Phase1To2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseChangeMotion_Phase1To2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateTriggerID_Phase1To2;
    
    UPROPERTY(EditAnywhere)
    float HitPointRate_Phase2To3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseChangeMotion_Phase2To3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateTriggerID_Phase2To3;
    
    UPROPERTY(EditAnywhere)
    float HitPointRate_Phase3To4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseChangeMotion_Phase3To4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateTriggerID_Phase3To4;
    
    UPROPERTY(EditAnywhere)
    float HitPointRate_Phase4To5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseChangeMotion_Phase4To5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateTriggerID_Phase4To5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase1_StandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase2_StandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeBarrierPartsSetting BarrierPartsSetting_Phase2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBikeMotorBallClimaxBehavior Behavior_FirstInPhase3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase3_StandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AbilitySetIDs_Phase3_Mine;
    
    UPROPERTY(EditAnywhere)
    uint8 MineAbilityNum_Phase3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase3_ShockWave;
    
    UPROPERTY(EditAnywhere)
    uint8 ShockWaveAbilityNum_Phase3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase3_Cannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeCannonAbilitySetting CannonAbilitySetting_Phase3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeBarrierPartsSetting BarrierPartsSetting_Phase3;
    
    UPROPERTY(EditAnywhere)
    float Time_ToChase_Phase3;
    
    UPROPERTY(EditAnywhere)
    float Distance_Chase_Max_Phase3;
    
    UPROPERTY(EditAnywhere)
    float RunSpeed_Chase_Phase3;
    
    UPROPERTY(EditAnywhere)
    float Distance_EndChase_Phase3;
    
    UPROPERTY(EditAnywhere)
    float Time_EndChase_Phase3;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Times_EndChase_Phase3_Easy;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Times_EndChase_Phase3_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase4_StandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AbilitySetIDs_Phase4_Mine;
    
    UPROPERTY(EditAnywhere)
    uint8 MineAbilityNum_Phase4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase4_ShockWave;
    
    UPROPERTY(EditAnywhere)
    uint8 ShockWaveAbilityNum_Phase4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase4_Cannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeCannonAbilitySetting CannonAbilitySetting_Phase4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeBarrierPartsSetting BarrierPartsSetting_Phase4;
    
    UPROPERTY(EditAnywhere)
    float Time_ToChase_Phase4;
    
    UPROPERTY(EditAnywhere)
    float Distance_Chase_Max_Phase4;
    
    UPROPERTY(EditAnywhere)
    float RunSpeed_Chase_Phase4;
    
    UPROPERTY(EditAnywhere)
    float Distance_EndChase_Phase4;
    
    UPROPERTY(EditAnywhere)
    float Time_EndChase_Phase4;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Times_EndChase_Phase4_Easy;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Times_EndChase_Phase4_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeRegenerationSetting RegenerationSetting_Phase4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase5_StandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AbilitySetIDs_Phase5_Mine;
    
    UPROPERTY(EditAnywhere)
    uint8 MineAbilityNum_Phase5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase5_ShockWave;
    
    UPROPERTY(EditAnywhere)
    uint8 ShockWaveAbilityNum_Phase5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilitySetID_Phase5_Cannon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeCannonAbilitySetting CannonAbilitySetting_Phase5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeBarrierPartsSetting BarrierPartsSetting_Phase5;
    
    UPROPERTY(EditAnywhere)
    float Time_ToChase_Phase5;
    
    UPROPERTY(EditAnywhere)
    float Distance_Chase_Max_Phase5;
    
    UPROPERTY(EditAnywhere)
    float RunSpeed_Chase_Phase5;
    
    UPROPERTY(EditAnywhere)
    float Distance_EndChase_Phase5;
    
    UPROPERTY(EditAnywhere)
    float Time_EndChase_Phase5;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Times_EndChase_Phase5_Easy;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Times_EndChase_Phase5_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBikeRegenerationSetting RegenerationSetting_Phase5;
    
    UPROPERTY(EditAnywhere)
    float Distance_RemoteDetonation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DamageSourceIDs_RemoteDetonation;
    
public:
    AEndBikeAIMotorBallController();
};

