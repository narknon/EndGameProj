#include "EndFootEffectorSolveFoot.h"

FEndFootEffectorSolveFoot::FEndFootEffectorSolveFoot() {
    this->FootProcessNumBonesInLimb = 0;
    this->FootBoneForwardAxis = EAxis::None;
    this->bEnableKneeTwistCorrection = false;
    this->bApplyAdjustRotation = false;
}

