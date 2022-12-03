#include "EndBikeAILoccheController.h"

AEndBikeAILoccheController::AEndBikeAILoccheController() {
    this->StateTriggerName_Sirius = TEXT("trg040_BIKE0_OverWrap_PvB0260");
    this->PlannerEventID_Sirius = TEXT("PV_TOWN7_BIKE0B0260");
    this->StateTriggerName_1stStamp = TEXT("trg040_BIKE0_OverWrap_PvB0270");
    this->PlannerEventID_1stStamp = TEXT("PV_TOWN7_BIKE0B0270");
    this->StateTriggerName_1stHitThunder = TEXT("trg040_BIKE0_OverWrap_PvB1030");
    this->PlannerEventID_1stHitThunder = TEXT("PV_TOWN7_BIKE0B1030");
    this->PlayerSpeed_ChangeToProvoke = 155.00f;
    this->PlayerSpeed_ReturnToMelee = 170.00f;
    this->Distance_ReturnToMelee = 10.00f;
    this->InitialAttackType = EBikeLoccheAttackType::Melee;
    this->AbilitySetID_Melee = TEXT("Locche_Melee");
    this->AbilitySetID_Smash = TEXT("Locche_Smash");
    this->AbilitySetID_Shot = TEXT("Locche_Shot");
    this->Num_Melee_Min = 2;
    this->Num_Melee_Max = 3;
    this->Num_Smash = 1;
    this->Num_ShortRangeAttack_ToSideChange = 4;
    this->Distance_SideChangeOffset = 1.00f;
    this->Time_ChangeToLongRange = 30.00f;
    this->Distance_LongRange_Max = 30.00f;
    this->RunSpeed_LongRange = 175.00f;
    this->RunSpeed_LongRange_Damaged = 160.00f;
    this->Distance_ChangeToShortRange = 5.00f;
    this->Time_ChangeToShortRange = 0.00f;
    this->Rate_ChangeToPhase2 = 0.60f;
    this->PlannerEventID_Opening = TEXT("PV_TOWN7_BIKE0B0250");
    this->DamageRatio_DelayingPhase2 = 1.00f;
    this->AbilitySetID_Melee2 = TEXT("Locche_Melee");
    this->AbilitySetID_Smash2 = TEXT("Locche_Rush");
    this->AbilitySetID_Provoke = TEXT("Locche_Provoke");
    this->Num_Melee_Min_P2 = 1;
    this->Num_Melee_Max_P2 = 2;
    this->Num_Smash_P2 = 1;
    this->Num_ShortRangeAttack_ToSideChange_P2 = 4;
    this->RunSpeed_Phase2 = 170.00f;
    this->Distance_Phase2_Max = 30.00f;
    this->Time_ChangeToStamp = 30.00f;
    this->Distance_BeforeStamp = 5.00f;
    this->RelativeSpeed_BeforeStamp = 30.00f;
    this->InterpSpeed_RollBeforeStamp = 2.00f;
    this->MaxAngle_RollBeforeStamp = 15.00f;
}

