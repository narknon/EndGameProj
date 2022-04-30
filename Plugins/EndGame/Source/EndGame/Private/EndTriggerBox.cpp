#include "EndTriggerBox.h"

class UPrimitiveComponent;
class AActor;

void AEndTriggerBox::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AEndTriggerBox::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AEndTriggerBox::AEndTriggerBox() {
    this->TextRenderComponent = NULL;
}

