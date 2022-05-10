#include "EndBTDecorator_Field_CheckDistance.h"

UEndBTDecorator_Field_CheckDistance::UEndBTDecorator_Field_CheckDistance() {
    this->m_DistanceMode = EBTDecorator_Field_CheckDistanceMode::Distance3D;
    this->m_bUseBodyRadius_From = false;
    this->m_bUseBodyRadius_To = false;
}

