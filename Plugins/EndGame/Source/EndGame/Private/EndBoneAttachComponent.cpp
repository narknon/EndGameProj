#include "EndBoneAttachComponent.h"

UEndBoneAttachComponent::UEndBoneAttachComponent() {
    this->OwnerMesh = NULL;
    this->AttachTarget = EEndBoneAttachTarget::None;
    this->AttachTargetMesh = NULL;
}

