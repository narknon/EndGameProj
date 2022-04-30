#include "SQEX_KineDriver_AssetUserDataElement.h"

FSQEX_KineDriver_AssetUserDataElement::FSQEX_KineDriver_AssetUserDataElement() {
    this->KineDriverIndex = 0;
    this->EnableScaleOpChildSSC = false;
    this->TickGroup = TG_PrePhysics;
    this->EnableLOD = false;
    this->MinScreenSize = 1;
    this->EnableFrustumCulling = false;
    this->EnableCheckDrawn = false;
}

