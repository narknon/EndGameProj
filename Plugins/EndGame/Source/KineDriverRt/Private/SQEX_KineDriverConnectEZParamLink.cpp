#include "SQEX_KineDriverConnectEZParamLink.h"

FSQEX_KineDriverConnectEZParamLink::FSQEX_KineDriverConnectEZParamLink() {
    this->InOperator = 0;
    this->InParameterType = ESQEX_KD_ParameterType_Other;
    this->OutOperator = 0;
    this->OutParameterType = ESQEX_KD_ParameterType_Other;
    this->OtherTargetParamIndex = 0;
    this->PX0 = 1;
    this->VX1_0 = 1;
    this->VX2_1 = 1;
    this->Grad0 = 1;
    this->Grad1 = 1;
    this->PY0 = 1;
    this->PY0A = 1;
    this->PY0B = 1;
    this->PY1 = 1;
    this->PY1A = 1;
    this->PY1B = 1;
    this->PY2 = 1;
    this->ByCoef = false;
}

