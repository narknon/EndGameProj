#include "EndSwitchableSkeletalMeshComponent.h"

void UEndSwitchableSkeletalMeshComponent::SetSkeletalMeshByLabel(FName Label, bool bReinitPose) {
}

void UEndSwitchableSkeletalMeshComponent::SetSkeletalMeshByIndex(int32 Index, bool bReinitPose) {
}

UEndSwitchableSkeletalMeshComponent::UEndSwitchableSkeletalMeshComponent() {
    this->bAttachParentIsMasterPose = true;
}

