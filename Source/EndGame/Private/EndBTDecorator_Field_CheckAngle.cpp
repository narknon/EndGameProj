#include "EndBTDecorator_Field_CheckAngle.h"

UEndBTDecorator_Field_CheckAngle::UEndBTDecorator_Field_CheckAngle() {
    this->m_bUseToSource = false;
    this->m_bAbs = false;
    this->m_Angle = 1;
    this->m_ArithmeticOperation = EEndAiMathCmp::Equal;
    this->m_bCheckYaw = false;
}

