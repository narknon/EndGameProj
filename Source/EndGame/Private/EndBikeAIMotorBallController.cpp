#include "EndBikeAIMotorBallController.h"

AEndBikeAIMotorBallController::AEndBikeAIMotorBallController() {
    this->PenetrateDamageRatio = 1;
    this->DownMotionID_Begin = TEXT("G_DmgF02_0");
    this->DownMotionID_Loop = TEXT("G_DmgF02_1");
    this->DownMotionID_End = TEXT("G_DmgF02_2");
    this->DownTime = 1;
    this->RelativeSpeedRate_Down = 1;
    this->RepairPartsNum = 3;
    this->Debug_Enable_Draw = false;
    this->Debug_Disable_LookAt = true;
    this->Debug_Disable_Aim = true;
    this->BackRun_Start = false;
    this->AnimSetID_BackRun = TEXT("GBike01");
    this->TurnMotionID_Right = TEXT("G_Turn_R_180");
    this->TurnMotionID_Left = TEXT("G_Turn_L_180");
    this->Distance_Forward_Limit = 1;
    this->MovableArea_Triangle_Top = 1;
    this->MovableArea_Triangle_Rate = 1;
    this->SlideLimit = 1;
    this->SlideSpeed = 1;
    this->Distance_Right_Threshold_UI = 1;
    this->Opacity_UI = 1;
    this->HitPointRate_Phase1To2 = 1;
    this->PhaseChangeMotion_Phase1To2 = TEXT("G_Atk_PhaseBreak_1");
    this->HitPointRate_Phase2To3 = 1;
    this->PhaseChangeMotion_Phase2To3 = TEXT("G_Atk_PhaseBreak_2");
    this->HitPointRate_Phase3To4 = 1;
    this->PhaseChangeMotion_Phase3To4 = TEXT("G_Atk_PhaseBreak_3");
    this->HitPointRate_Phase4To5 = 1;
    this->PhaseChangeMotion_Phase4To5 = TEXT("G_Atk_PhaseBreak_4");
    this->Behavior_FirstInPhase3 = EBikeMotorBallClimaxBehavior::Standard;
    this->MineAbilityNum_Phase3 = 1;
    this->ShockWaveAbilityNum_Phase3 = 0;
    this->Time_ToChase_Phase3 = 1;
    this->Distance_Chase_Max_Phase3 = 1;
    this->RunSpeed_Chase_Phase3 = 1;
    this->Distance_EndChase_Phase3 = 1;
    this->Time_EndChase_Phase3 = 1;
    this->MineAbilityNum_Phase4 = 1;
    this->ShockWaveAbilityNum_Phase4 = 0;
    this->Time_ToChase_Phase4 = 1;
    this->Distance_Chase_Max_Phase4 = 1;
    this->RunSpeed_Chase_Phase4 = 1;
    this->Distance_EndChase_Phase4 = 1;
    this->Time_EndChase_Phase4 = 1;
    this->MineAbilityNum_Phase5 = 1;
    this->ShockWaveAbilityNum_Phase5 = 1;
    this->Time_ToChase_Phase5 = 1;
    this->Distance_Chase_Max_Phase5 = 1;
    this->RunSpeed_Chase_Phase5 = 1;
    this->Distance_EndChase_Phase5 = 1;
    this->Time_EndChase_Phase5 = 1;
    this->Distance_RemoteDetonation = 1;
}

