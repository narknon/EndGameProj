#include "EndTurnBackBox.h"

AEndTurnBackBox::AEndTurnBackBox() {
    this->m_pTurnBackTriggerBox = NULL;
    this->m_pFollowDiscardTriggerBox = NULL;
    this->m_pBlockWall = NULL;
    this->EnableBlockWall = true;
}

