#include "AnimNode_EndPhysicalRotate.h"

FAnimNode_EndPhysicalRotate::FAnimNode_EndPhysicalRotate() {
    this->EndPointDistance = 1;
    this->bEnabledEndPointGravity = false;
    this->AnimatedPositionStiffness = 1;
    this->VelocityFriction = 1;
    this->ConstraintAngle = 1;
    this->ConstraintAngleStiffness = 1;
    this->ContactPadding = 1;
    this->ContactPaddingToAnimPositionRate = 1;
    this->ContactPositionStiffness = 1;
    this->ContactVelocityStiffness = 1;
    this->PositionIterationCount = 0;
    this->VelocityIterationCount = 0;
    this->WeightSmoothRate = 1;
    this->ActiveDuringTime = 1;
}

