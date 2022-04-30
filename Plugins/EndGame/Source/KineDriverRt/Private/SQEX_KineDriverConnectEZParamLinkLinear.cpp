#include "SQEX_KineDriverConnectEZParamLinkLinear.h"

FSQEX_KineDriverConnectEZParamLinkLinear::FSQEX_KineDriverConnectEZParamLinkLinear() {
    this->InOperator = 0;
    this->InParameterType = ESQEX_KD_ParameterType_Other;
    this->OutOperator = 0;
    this->OutParameterType = ESQEX_KD_ParameterType_Other;
    this->OtherTargetParamIndex = 0;
    this->Scale = 1;
    this->Offset = 1;
    this->ClampMin = 1;
    this->ClampMax = 1;
    this->EnableMin = false;
    this->EnableMax = false;
}

