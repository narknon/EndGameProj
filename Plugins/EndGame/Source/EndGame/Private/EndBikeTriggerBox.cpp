#include "EndBikeTriggerBox.h"

class AActor;

void AEndBikeTriggerBox::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AEndBikeTriggerBox::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

AEndBikeTriggerBox::AEndBikeTriggerBox() {
    this->Type = EEndBikeTriggerBoxType::Destroy;
}

