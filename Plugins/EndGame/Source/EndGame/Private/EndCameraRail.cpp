#include "EndCameraRail.h"
#include "Components/SplineComponent.h"

AEndCameraRail::AEndCameraRail() {
    this->CameraRailComponent = CreateDefaultSubobject<USplineComponent>(TEXT("CameraRailComponent"));
    this->PlayerRailComponent = CreateDefaultSubobject<USplineComponent>(TEXT("PlayerRailComponent"));
    this->RailCameraSequencerData = NULL;
    this->ReverseRailCameraSequencerData = NULL;
    this->RCSMinDist = 1;
    this->RCSMaxDist = 1;
    this->UpdateControlRotation = false;
    this->UpdateControlRotOnWeightDecrease = false;
    this->StopInputBlend = false;
    this->UseHorizontalFollow = false;
    this->CutConnectType = RCSCutConnect::None;
    this->UseDOFActor = false;
    this->DebugTime = 1;
    this->ShowCamera = false;
    this->DebugPreview = false;
    this->ShowNumber = false;
    this->UseCameraCut = true;
    this->_PrevWeight = 1;
    this->PlayTime = 1;
    this->DistThreshold = 1;
    this->StartBlend = 1;
    this->EndBlend = 1;
    this->CanSkip = false;
}

