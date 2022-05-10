#include "EndBTDecorator_Field_SensingMember.h"

UEndBTDecorator_Field_SensingMember::UEndBTDecorator_Field_SensingMember() {
    this->m_bUseSourceToTarget = false;
    this->m_Distance = 1;
    this->m_ArithmeticOperation_Distance = EEndAiMathCmp::Equal;
    this->m_bUseBodyRadius = true;
    this->m_Angle = 1;
    this->m_ArithmeticOperation_Angle = EEndAiMathCmp::Equal;
    this->m_bAbs_Angle = true;
    this->m_bIgnoreLeader = true;
    this->m_bLeaderOnly = false;
    this->m_bCheckHeight = false;
    this->m_Height = 1;
}

