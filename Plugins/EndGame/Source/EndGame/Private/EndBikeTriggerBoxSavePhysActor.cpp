#include "EndBikeTriggerBoxSavePhysActor.h"

class AActor;

void AEndBikeTriggerBoxSavePhysActor::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

AEndBikeTriggerBoxSavePhysActor::AEndBikeTriggerBoxSavePhysActor() {
    this->mTriggerTarget = NULL;
}

