#include "EndVE0003CarriageCharacter.h"
#include "EndBoneAttachComponent.h"
#include "EndSkeletalMeshComponent.h"

AEndVE0003CarriageCharacter::AEndVE0003CarriageCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UEndSkeletalMeshComponent>(ACharacter::MeshComponentName)) {
    this->BoneAttachL = CreateDefaultSubobject<UEndBoneAttachComponent>(TEXT("BoneAttachL"));
    this->BoneAttachR = CreateDefaultSubobject<UEndBoneAttachComponent>(TEXT("BoneAttachR"));
    this->Chocobo = NULL;
    this->Rider = NULL;
}

