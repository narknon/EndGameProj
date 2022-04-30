#include "EndBattleAbilityRotateState.h"

UEndBattleAbilityRotateState::UEndBattleAbilityRotateState() {
    this->Type = EBattleAbilityRotateNotifyState::None;
    this->StartAngle = 1;
    this->GoalAngle = 1;
    this->RotateVelocity = 1;
    this->StartType = EBattleAbilityRotateStartType::Inheritance;
    this->InterpolationType = EBattleAbilityInterpolationType::Liner;
    this->FrameDeltaTimeSpeed = 1;
}

