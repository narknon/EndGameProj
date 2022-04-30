#include "EndBTTask_AIPCDodge.h"

UEndBTTask_AIPCDodge::UEndBTTask_AIPCDodge() {
    this->DodgeDirectionType = EDodgeDirectionType::TOWARD;
    this->StartWaitTime = 1;
    this->bInputDirectionDuringDodge = true;
    this->bStyleChange = false;
}

