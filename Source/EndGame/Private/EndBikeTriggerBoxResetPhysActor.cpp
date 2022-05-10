#include "EndBikeTriggerBoxResetPhysActor.h"

class AActor;

void AEndBikeTriggerBoxResetPhysActor::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

AEndBikeTriggerBoxResetPhysActor::AEndBikeTriggerBoxResetPhysActor() {
    this->mTriggerTarget = NULL;
    this->SaveTrigger = NULL;
}

