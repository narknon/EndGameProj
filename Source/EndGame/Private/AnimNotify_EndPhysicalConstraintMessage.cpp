#include "AnimNotify_EndPhysicalConstraintMessage.h"

UAnimNotify_EndPhysicalConstraintMessage::UAnimNotify_EndPhysicalConstraintMessage() {
    this->Message = EEndPhysicalConstraintMessage::Deactivate;
    this->Parameter0 = 1;
}

