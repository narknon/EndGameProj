#include "EndFeelerBarrierInstanceContext.h"

FEndFeelerBarrierInstanceContext::FEndFeelerBarrierInstanceContext() {
    this->InstanceIndex = 0;
    this->VerticalHeightOffset = 0.00f;
    this->TargetExtrusionDistance = 0.00f;
    this->CurrentExtrusionDistance = 0.00f;
    this->ExtrusionWaitTimer = 0.00f;
    this->DeactiveUpSpeed = 0.00f;
}

