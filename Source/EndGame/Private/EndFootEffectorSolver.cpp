#include "EndFootEffectorSolver.h"

UEndFootEffectorSolver::UEndFootEffectorSolver() {
    this->FloorTraceToOffsetHeight = -100.00f;
    this->FootTraceBeginOffsetHeight = 100.00f;
    this->FootTraceEndOffsetHeight = -30.00f;
    this->FootMaxIterations.AddDefaulted(6);
    this->FootReachPrecision = 0.01f;
    this->TargetReachStepPercent = 0.70f;
    this->PullDistribution = 0.50f;
    this->FloorAdjustRotationInterpSpeed = 4.00f;
    this->HipAdjustFloorRate = 0.40f;
    this->HipAdjustFloorRotationRate = 1.00f;
    this->PitchHipOffsetFloorAngleRate = 0.00f;
    this->RollHipOffsetFloorAngleRate = 0.00f;
    this->FootAdjustFloorRate = 0.20f;
    this->PitchAdjustFloorAngleRate = 0.00f;
    this->RollAdjustFloorAngleRate = 0.00f;
    this->FootAdjustFloorOrientationRate = 0.50f;
    this->FootAdjustFloorTranslationAngleRate = 0.00f;
    this->CollisionOffsetHeightMin = -30.00f;
    this->FootAdjustTranslationHeightMax = 40.00f;
    this->FootLandingThreshold = 10.00f;
    this->bEffective = true;
    this->bAllowedHipOnly = false;
    this->bTraceToeOnly = false;
    this->bIgnoreStairs = false;
}

