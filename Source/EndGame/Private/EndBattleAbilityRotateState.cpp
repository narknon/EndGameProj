#include "EndBattleAbilityRotateState.h"

UEndBattleAbilityRotateState::UEndBattleAbilityRotateState() {
    this->Type = EBattleAbilityRotateNotifyState::None;
    this->StartAngle = 0.00f;
    this->GoalAngle = 0.00f;
    this->RotateVelocity = 360.00f;
    this->StartType = EBattleAbilityRotateStartType::Inheritance;
    this->InterpolationType = EBattleAbilityInterpolationType::Liner;
    this->FrameDeltaTimeSpeed = 1.00f;
}

