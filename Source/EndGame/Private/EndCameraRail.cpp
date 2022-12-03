#include "EndCameraRail.h"
#include "Components/SplineComponent.h"

AEndCameraRail::AEndCameraRail() {
    this->CameraRailComponent = CreateDefaultSubobject<USplineComponent>(TEXT("CameraRailComponent"));
    this->PlayerRailComponent = CreateDefaultSubobject<USplineComponent>(TEXT("PlayerRailComponent"));
    this->RailCameraSequencerData = NULL;
    this->ReverseRailCameraSequencerData = NULL;
    this->RCSMinDist = 100.00f;
    this->RCSMaxDist = 200.00f;
    this->UpdateControlRotation = false;
    this->UpdateControlRotOnWeightDecrease = false;
    this->StopInputBlend = false;
    this->UseHorizontalFollow = false;
    this->CutConnectType = RCSCutConnect::None;
    this->UseDOFActor = false;
    this->DebugTime = 0.00f;
    this->ShowCamera = false;
    this->DebugPreview = false;
    this->ShowNumber = false;
    this->UseCameraCut = true;
    this->_PrevWeight = -1.00f;
    this->PlayTime = 5.00f;
    this->DistThreshold = 10.00f;
    this->StartBlend = 0.10f;
    this->EndBlend = 0.10f;
    this->CanSkip = false;
}

