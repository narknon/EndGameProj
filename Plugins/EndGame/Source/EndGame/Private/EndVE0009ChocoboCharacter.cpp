#include "EndVE0009ChocoboCharacter.h"
#include "EndBoneAttachComponent.h"
#include "EndSkeletalMeshComponent.h"

AEndVE0009ChocoboCharacter::AEndVE0009ChocoboCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UEndSkeletalMeshComponent>(ACharacter::MeshComponentName)) {
    this->BoneAttach = CreateDefaultSubobject<UEndBoneAttachComponent>(TEXT("BoneAttach"));
    this->Carriage = NULL;
}

