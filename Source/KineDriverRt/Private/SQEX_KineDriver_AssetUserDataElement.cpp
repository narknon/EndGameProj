#include "SQEX_KineDriver_AssetUserDataElement.h"

FSQEX_KineDriver_AssetUserDataElement::FSQEX_KineDriver_AssetUserDataElement() {
    this->KineDriverIndex = 0;
    this->EnableScaleOpChildSSC = false;
    this->TickGroup = TG_SequencerControl;
    this->EnableLOD = false;
    this->MinScreenSize = 0.00f;
    this->EnableFrustumCulling = false;
    this->EnableCheckDrawn = false;
}

