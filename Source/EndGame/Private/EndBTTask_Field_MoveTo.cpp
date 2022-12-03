#include "EndBTTask_Field_MoveTo.h"

UEndBTTask_Field_MoveTo::UEndBTTask_Field_MoveTo() {
    this->m_bRequestOnce = false;
    this->m_AiType = FFieldAiType::FFieldAiType_ACCOMPANY;
    this->m_BlendTime = 1.00f;
}

