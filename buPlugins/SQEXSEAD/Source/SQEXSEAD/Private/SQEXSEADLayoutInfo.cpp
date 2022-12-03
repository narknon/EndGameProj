#include "SQEXSEADLayoutInfo.h"

FSQEXSEADLayoutInfo::FSQEXSEADLayoutInfo() {
    this->LayoutType = ESQEXSEADLayoutType::Point;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 0.00f;
    this->OcclusionLPF = 0.00f;
    this->OcclusionVolume = 0.00f;
    this->HorizontalWedgeAngle = 0.00f;
    this->VerticalWedgeAngle = 0.00f;
    this->CylinderRotation = 0.00f;
}

