#include "AnimNotify_EndHandIK.h"

UAnimNotify_EndHandIK::UAnimNotify_EndHandIK() {
    this->HandType = EEndHandType::All;
    this->Constraint = EEndHandConstraint::None;
    this->ConstraintRate = 1;
}

