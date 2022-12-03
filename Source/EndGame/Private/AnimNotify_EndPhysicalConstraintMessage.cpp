#include "AnimNotify_EndPhysicalConstraintMessage.h"

UAnimNotify_EndPhysicalConstraintMessage::UAnimNotify_EndPhysicalConstraintMessage() {
    this->Message = EEndPhysicalConstraintMessage::Activate;
    this->Parameter0 = 0.00f;
}

