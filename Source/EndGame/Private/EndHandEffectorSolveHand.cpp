#include "EndHandEffectorSolveHand.h"

FEndHandEffectorSolveHand::FEndHandEffectorSolveHand() {
    this->ShoulderStiffness = 0.00f;
    this->HandProcessNumBonesInLimb = 0;
    this->HandBoneForwardAxis = EAxis::None;
    this->bEnableElbowTwistCorrection = false;
}

