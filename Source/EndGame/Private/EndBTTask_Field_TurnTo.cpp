#include "EndBTTask_Field_TurnTo.h"

UEndBTTask_Field_TurnTo::UEndBTTask_Field_TurnTo() {
    this->m_Tolerance = 0.10f;
    this->m_Offset = 0.00f;
    this->m_bTurnContextRotation = false;
    this->m_bRequestOnce = false;
}

