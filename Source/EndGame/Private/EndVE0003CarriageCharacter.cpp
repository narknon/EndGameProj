#include "EndVE0003CarriageCharacter.h"
#include "EndBoneAttachComponent.h"

AEndVE0003CarriageCharacter::AEndVE0003CarriageCharacter() {
    this->BoneAttachL = CreateDefaultSubobject<UEndBoneAttachComponent>(TEXT("BoneAttachL"));
    this->BoneAttachR = CreateDefaultSubobject<UEndBoneAttachComponent>(TEXT("BoneAttachR"));
    this->Chocobo = NULL;
    this->Rider = NULL;
}

