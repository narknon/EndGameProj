#include "EndBikeAIControllerTrike.h"

AEndBikeAIControllerTrike::AEndBikeAIControllerTrike() {
    this->MoveDistanceRange_Min_Enemies_InTruckBattle0 = 500.00f;
    this->MoveDistanceRange_Min_Enemies_InSoldier3rdBattle0 = 400.00f;
    this->MoveDistanceRange_Min_Enemies_InSoldier3rdBattle1 = 3000.00f;
    this->StateTriggerTime_AttackedBySoldier3rd = 1.00f;
    this->SpecialAbilityValidMinMileage = 5.00f;
    this->SpecialAttackDelay = 1.00f;
}

