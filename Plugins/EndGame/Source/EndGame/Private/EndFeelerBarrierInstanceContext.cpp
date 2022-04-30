#include "EndFeelerBarrierInstanceContext.h"

FEndFeelerBarrierInstanceContext::FEndFeelerBarrierInstanceContext() {
    this->InstanceIndex = 0;
    this->VerticalHeightOffset = 1;
    this->TargetExtrusionDistance = 1;
    this->CurrentExtrusionDistance = 1;
    this->ExtrusionWaitTimer = 1;
    this->DeactiveUpSpeed = 1;
}

