#include "EndLookAtSolver.h"

UEndLookAtSolver::UEndLookAtSolver() {
    this->bNormalizeBoneWeight = true;
    this->bComponentSpaceForwardAim = false;
    this->bUseSolveBoneAimVector = true;
    this->bEulerInterp = false;
    this->ActiveBlendTime = 1;
    this->DeactiveBlendTime = 1;
    this->ActiveBlendTimeWarning = 1;
    this->DeactiveBlendTimeWarning = 1;
    this->ActiveAngle = 1;
    this->DeactiveAngle = 1;
    this->ActiveAngleWarning = 1;
    this->DeactiveAngleWarning = 1;
    this->bClampAtActiveAngle = false;
    this->ClampHorizontalDistanceMin = 1;
    this->ActivityDurationMin = 1;
    this->WeightBias = 1;
    this->WeightBiasWarning = 1;
    this->UpWeightBias = 1;
    this->UpWeightBiasWarning = 1;
}

