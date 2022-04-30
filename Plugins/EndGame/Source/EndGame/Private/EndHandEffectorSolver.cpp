#include "EndHandEffectorSolver.h"

UEndHandEffectorSolver::UEndHandEffectorSolver() {
    this->HandMaxIterations.AddDefaulted(6);
    this->HandReachPrecision = 1;
    this->TargetReachStepPercent = 1;
    this->PullDistribution = 1;
    this->AlwaysLockRate = 1;
}

