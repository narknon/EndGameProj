#include "EndEnvQueryTest_AIPCLineOfSight.h"

UEndEnvQueryTest_AIPCLineOfSight::UEndEnvQueryTest_AIPCLineOfSight() {
    this->TargetLocationType = EAIPCTargetLocationType::TargetCursor;
    this->ConsiderWeaponRange = true;
    this->ConsiderCheckOnNavmesh = true;
}

