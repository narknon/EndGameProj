#include "EndTerminalActor.h"
#include "EndBoneAttachComponent.h"

AEndTerminalActor::AEndTerminalActor() {
    this->BoneAttach = CreateDefaultSubobject<UEndBoneAttachComponent>(TEXT("BoneAttach"));
}

