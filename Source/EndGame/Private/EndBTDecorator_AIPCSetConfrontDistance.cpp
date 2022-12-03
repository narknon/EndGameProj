#include "EndBTDecorator_AIPCSetConfrontDistance.h"

UEndBTDecorator_AIPCSetConfrontDistance::UEndBTDecorator_AIPCSetConfrontDistance() {
    this->ConfrontType = EConfrontType::COMBAT;
    this->MinDistance = 0.00f;
    this->MaxDistance = 99999.00f;
    this->Offset = 0.00f;
}

