#include "SkeletalMeshComponentBudgeted.h"

void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator) {
}

USkeletalMeshComponentBudgeted::USkeletalMeshComponentBudgeted() {
    this->bAutoRegisterWithBudgetAllocator = true;
    this->bAutoCalculateSignificance = false;
}

