#include "EndTestCoverBox.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

AEndTestCoverBox::AEndTestCoverBox() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->WallComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("WallComponent"));
    this->CameraWallComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CameraWallComponent"));
}

