#include "SQEXSEADLayoutInfo.h"

FSQEXSEADLayoutInfo::FSQEXSEADLayoutInfo() {
    this->LayoutType = ESQEXSEADLayoutType::Point;
    this->InnerRadius = 1;
    this->OuterRadius = 1;
    this->OcclusionLPF = 1;
    this->OcclusionVolume = 1;
    this->HorizontalWedgeAngle = 1;
    this->VerticalWedgeAngle = 1;
    this->CylinderRotation = 1;
}

