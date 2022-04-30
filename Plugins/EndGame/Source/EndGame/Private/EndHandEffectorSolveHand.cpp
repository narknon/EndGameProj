#include "EndHandEffectorSolveHand.h"

FEndHandEffectorSolveHand::FEndHandEffectorSolveHand() {
    this->ShoulderStiffness = 1;
    this->HandProcessNumBonesInLimb = 0;
    this->HandBoneForwardAxis = EAxis::None;
    this->bEnableElbowTwistCorrection = false;
}

