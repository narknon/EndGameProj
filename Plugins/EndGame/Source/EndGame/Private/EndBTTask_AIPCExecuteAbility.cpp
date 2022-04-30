#include "EndBTTask_AIPCExecuteAbility.h"

UEndBTTask_AIPCExecuteAbility::UEndBTTask_AIPCExecuteAbility() {
    this->StartWaitTime = 1;
    this->SkipAbilityDistanceCheckBBKey = TEXT("SkipAbilityDistanceCheck");
    this->InstanceExecuteAbilityBBKey = TEXT("InstanceExecuteAbilityBBKey");
    this->ExecutingAbility = TEXT("ExecutingAbility");
}

