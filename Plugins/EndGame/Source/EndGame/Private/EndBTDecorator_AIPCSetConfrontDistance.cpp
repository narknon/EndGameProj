#include "EndBTDecorator_AIPCSetConfrontDistance.h"

UEndBTDecorator_AIPCSetConfrontDistance::UEndBTDecorator_AIPCSetConfrontDistance() {
    this->ConfrontType = EConfrontType::COMBAT;
    this->MinDistance = 1;
    this->MaxDistance = 1;
    this->Offset = 1;
}

