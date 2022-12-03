#include "EndAimSolveEffector.h"

FEndAimSolveEffector::FEndAimSolveEffector() {
    this->bComponentSpaceForwardAim = false;
    this->ActiveAngle = 0.00f;
    this->bForceSkipSolvedTarget = false;
    this->AdditiveContinuationTargetScore = 0;
}

