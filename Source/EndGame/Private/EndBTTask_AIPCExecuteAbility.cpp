#include "EndBTTask_AIPCExecuteAbility.h"

UEndBTTask_AIPCExecuteAbility::UEndBTTask_AIPCExecuteAbility() {
    this->StartWaitTime = 3.00f;
    this->SkipAbilityDistanceCheckBBKey = TEXT("SkipAbilityDistanceCheck");
    this->InstanceExecuteAbilityBBKey = TEXT("InstanceExecuteAbilityBBKey");
    this->ExecutingAbility = TEXT("ExecutingAbility");
}

