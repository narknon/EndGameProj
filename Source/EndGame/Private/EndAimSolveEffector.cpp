#include "EndAimSolveEffector.h"

FEndAimSolveEffector::FEndAimSolveEffector() {
    this->bComponentSpaceForwardAim = false;
    this->ActiveAngle = 1;
    this->bForceSkipSolvedTarget = false;
    this->AdditiveContinuationTargetScore = 0;
}

