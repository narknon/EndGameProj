#include "EndFieldActionActorWireMeshMove.h"
#include "EndWireMeshMoveDoorWayCreateComponent.h"

AEndFieldActionActorWireMeshMove::AEndFieldActionActorWireMeshMove() {
    this->PointSpaceLR = 0;
    this->EndWireMeshMoveDoorWayCreate = CreateDefaultSubobject<UEndWireMeshMoveDoorWayCreateComponent>(TEXT("EndWireMeshMoveDoorWayCreate"));
    this->EndWireMeshMoveDoorWayCreate1 = CreateDefaultSubobject<UEndWireMeshMoveDoorWayCreateComponent>(TEXT("EndWireMeshMoveDoorWayCreate1"));
    this->TextRenderComponent = NULL;
    this->PointMaxNum = 0;
}

