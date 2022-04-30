#include "EndAIModel.h"

FEndAIModel::FEndAIModel() {
    this->bActive = false;
    this->bAllowedUpdating = false;
    this->bTeleported = false;
    this->UpdatePriority = EEndAIUpdatePriority::VelyHigh_Talking;
    this->DebugDrawBehaviors = false;
}

