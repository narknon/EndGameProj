#include "EndFootEffectorSolver.h"

UEndFootEffectorSolver::UEndFootEffectorSolver() {
    this->FloorTraceToOffsetHeight = 1;
    this->FootTraceBeginOffsetHeight = 1;
    this->FootTraceEndOffsetHeight = 1;
    this->FootMaxIterations.AddDefaulted(6);
    this->FootReachPrecision = 1;
    this->TargetReachStepPercent = 1;
    this->PullDistribution = 1;
    this->FloorAdjustRotationInterpSpeed = 1;
    this->HipAdjustFloorRate = 1;
    this->HipAdjustFloorRotationRate = 1;
    this->PitchHipOffsetFloorAngleRate = 1;
    this->RollHipOffsetFloorAngleRate = 1;
    this->FootAdjustFloorRate = 1;
    this->PitchAdjustFloorAngleRate = 1;
    this->RollAdjustFloorAngleRate = 1;
    this->FootAdjustFloorOrientationRate = 1;
    this->FootAdjustFloorTranslationAngleRate = 1;
    this->CollisionOffsetHeightMin = 1;
    this->FootAdjustTranslationHeightMax = 1;
    this->FootLandingThreshold = 1;
    this->bEffective = true;
    this->bAllowedHipOnly = false;
    this->bTraceToeOnly = false;
    this->bIgnoreStairs = false;
}

