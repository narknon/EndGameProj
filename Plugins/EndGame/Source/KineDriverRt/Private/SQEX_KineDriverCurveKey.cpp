#include "SQEX_KineDriverCurveKey.h"

FSQEX_KineDriverCurveKey::FSQEX_KineDriverCurveKey() {
    this->X = 1;
    this->Y = 1;
    this->LeftTanX = 1;
    this->LeftTanY = 1;
    this->RightTanX = 1;
    this->RightTanY = 1;
    this->InterpType = ESQEX_KD_InterpolateType_Step;
}

