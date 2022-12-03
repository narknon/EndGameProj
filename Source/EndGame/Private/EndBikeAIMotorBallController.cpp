#include "EndBikeAIMotorBallController.h"

AEndBikeAIMotorBallController::AEndBikeAIMotorBallController() {
    this->PenetrateDamageRatio = 0.50f;
    this->DownMotionID_Begin = TEXT("G_DmgF02_0");
    this->DownMotionID_Loop = TEXT("G_DmgF02_1");
    this->DownMotionID_End = TEXT("G_DmgF02_2");
    this->DownTime = 10.00f;
    this->RelativeSpeedRate_Down = 2.00f;
    this->RepairPartsNum = 3;
    this->Debug_Enable_Draw = false;
    this->Debug_Disable_LookAt = true;
    this->Debug_Disable_Aim = true;
    this->BackRun_Start = false;
    this->AnimSetID_BackRun = TEXT("GBike01");
    this->TurnMotionID_Right = TEXT("G_Turn_R_180");
    this->TurnMotionID_Left = TEXT("G_Turn_L_180");
    this->Distance_Forward_Limit = 260.00f;
    this->MovableArea_Triangle_Top = 1100.00f;
    this->MovableArea_Triangle_Rate = 1.50f;
    this->SlideLimit = 1000.00f;
    this->SlideSpeed = 2.00f;
    this->Distance_Right_Threshold_UI = 200.00f;
    this->Opacity_UI = 0.20f;
    this->HitPointRate_Phase1To2 = 0.80f;
    this->PhaseChangeMotion_Phase1To2 = TEXT("G_Atk_PhaseBreak_1");
    this->HitPointRate_Phase2To3 = 0.50f;
    this->PhaseChangeMotion_Phase2To3 = TEXT("G_Atk_PhaseBreak_2");
    this->HitPointRate_Phase3To4 = 0.20f;
    this->PhaseChangeMotion_Phase3To4 = TEXT("G_Atk_PhaseBreak_3");
    this->HitPointRate_Phase4To5 = 0.00f;
    this->PhaseChangeMotion_Phase4To5 = TEXT("G_Atk_PhaseBreak_4");
    this->Behavior_FirstInPhase3 = EBikeMotorBallClimaxBehavior::Chase_Mine;
    this->MineAbilityNum_Phase3 = 1;
    this->ShockWaveAbilityNum_Phase3 = 0;
    this->Time_ToChase_Phase3 = 30.00f;
    this->Distance_Chase_Max_Phase3 = 30.00f;
    this->RunSpeed_Chase_Phase3 = 175.00f;
    this->Distance_EndChase_Phase3 = 5.00f;
    this->Time_EndChase_Phase3 = 30.00f;
    this->MineAbilityNum_Phase4 = 1;
    this->ShockWaveAbilityNum_Phase4 = 0;
    this->Time_ToChase_Phase4 = 30.00f;
    this->Distance_Chase_Max_Phase4 = 30.00f;
    this->RunSpeed_Chase_Phase4 = 175.00f;
    this->Distance_EndChase_Phase4 = 5.00f;
    this->Time_EndChase_Phase4 = 30.00f;
    this->MineAbilityNum_Phase5 = 1;
    this->ShockWaveAbilityNum_Phase5 = 1;
    this->Time_ToChase_Phase5 = 30.00f;
    this->Distance_Chase_Max_Phase5 = 30.00f;
    this->RunSpeed_Chase_Phase5 = 175.00f;
    this->Distance_EndChase_Phase5 = 5.00f;
    this->Time_EndChase_Phase5 = 30.00f;
    this->Distance_RemoteDetonation = -400.00f;
}

