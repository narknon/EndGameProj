#include "AnimNode_EndPhysicalRotate.h"

FAnimNode_EndPhysicalRotate::FAnimNode_EndPhysicalRotate() {
    this->EndPointDistance = 0.00f;
    this->bEnabledEndPointGravity = false;
    this->AnimatedPositionStiffness = 0.00f;
    this->VelocityFriction = 0.00f;
    this->ConstraintAngle = 0.00f;
    this->ConstraintAngleStiffness = 0.00f;
    this->ContactPadding = 0.00f;
    this->ContactPaddingToAnimPositionRate = 0.00f;
    this->ContactPositionStiffness = 0.00f;
    this->ContactVelocityStiffness = 0.00f;
    this->PositionIterationCount = 0;
    this->VelocityIterationCount = 0;
    this->WeightSmoothRate = 0.00f;
    this->ActiveDuringTime = 0.00f;
}

