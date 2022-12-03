#include "EndBTTask_Field_LookAtTarget.h"

UEndBTTask_Field_LookAtTarget::UEndBTTask_Field_LookAtTarget() {
    this->m_bActive = true;
    this->m_bForce = false;
    this->m_LookAtInterval = -1.00f;
    this->m_LookAtIntervalRand = 0.00f;
    this->m_LookAtDisableInterval = 8.00f;
}

