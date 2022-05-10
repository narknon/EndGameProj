#include "EndTestCoverBox.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

AEndTestCoverBox::AEndTestCoverBox() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->WallComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("WallComponent"));
    this->CameraWallComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CameraWallComponent"));
}

