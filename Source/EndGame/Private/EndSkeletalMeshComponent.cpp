#include "EndSkeletalMeshComponent.h"

UEndSkeletalMeshComponent::UEndSkeletalMeshComponent() {
    this->SyncPoseComponent = NULL;
    this->bAutoLinkAttachChildren = false;
    this->PrerequisiteMesh = NULL;
    this->PrerequisiteKBD = NULL;
}

