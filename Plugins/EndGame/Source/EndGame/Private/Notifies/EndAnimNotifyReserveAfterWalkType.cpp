#include "EndAnimNotifyReserveAfterWalkType.h"

UEndAnimNotifyReserveAfterWalkType::UEndAnimNotifyReserveAfterWalkType() {
    this->AfterWalkType = EEndAnimWalkType::Idle;
    this->AfterLimitedRunningTimer = 1;
}

