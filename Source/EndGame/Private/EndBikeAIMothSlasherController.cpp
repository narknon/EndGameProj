#include "EndBikeAIMothSlasherController.h"

AEndBikeAIMothSlasherController::AEndBikeAIMothSlasherController() {
    this->InitialAttackType = EBikeMothSlasherAttackType::None;
    this->AbilityCount_DoCharge = 1;
    this->AbilitySetID_Charge = TEXT("MothSlasher_Charge");
    this->ChargeCount_DoDischarge = 3;
    this->AbilitySetID_Discharge = TEXT("MothSlasher_Discharge");
    this->HitPointRate_ChangeToPhase2 = 1;
    this->MotionID_ChangeToPhase2 = TEXT("G_DmgDestroyBottom01");
    this->AbilitySetID_Phase2 = TEXT("MothSlasher_Break");
    this->BreakMeshID = TEXT("Under");
    this->BreakMeshStateLabel_After = TEXT("Break");
    this->BrokenEffectName = TEXT("FX_GBike_EN1007_BreakSmoke_01");
    this->BrokenEffectSocket = TEXT("C_Hip_a");
    this->bRunAhead = true;
    this->KeepTargetDistance = 1;
    this->bDisableArmsPushCollision = true;
    this->HitPointRate_CutterStorm2 = 1;
    this->DrillAbilityID_Normal = TEXT("EN1007_80_Atk_Drill");
    this->DrillAbilityID_Long = TEXT("EN1007_80_Atk_Drill_L");
    this->DrillAbilityCount_ReplaceToLong = 3;
    this->MotionID_Unbalance = TEXT("G_GuardDownF01");
}

