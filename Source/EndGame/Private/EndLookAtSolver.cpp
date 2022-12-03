#include "EndLookAtSolver.h"

UEndLookAtSolver::UEndLookAtSolver() {
    this->bNormalizeBoneWeight = true;
    this->bComponentSpaceForwardAim = false;
    this->bUseSolveBoneAimVector = true;
    this->bEulerInterp = false;
    this->ActiveBlendTime = 0.50f;
    this->DeactiveBlendTime = 0.80f;
    this->ActiveBlendTimeWarning = 0.40f;
    this->DeactiveBlendTimeWarning = 0.50f;
    this->ActiveAngle = 75.00f;
    this->DeactiveAngle = 95.00f;
    this->ActiveAngleWarning = 75.00f;
    this->DeactiveAngleWarning = 95.00f;
    this->bClampAtActiveAngle = false;
    this->ClampHorizontalDistanceMin = 100.00f;
    this->ActivityDurationMin = 1.00f;
    this->WeightBias = 1.00f;
    this->WeightBiasWarning = 0.70f;
    this->UpWeightBias = 1.00f;
    this->UpWeightBiasWarning = 0.50f;
}

