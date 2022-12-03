#include "EndHandEffectorSolver.h"

UEndHandEffectorSolver::UEndHandEffectorSolver() {
    this->HandMaxIterations.AddDefaulted(6);
    this->HandReachPrecision = 0.01f;
    this->TargetReachStepPercent = 0.70f;
    this->PullDistribution = 0.50f;
    this->AlwaysLockRate = 0.00f;
}

