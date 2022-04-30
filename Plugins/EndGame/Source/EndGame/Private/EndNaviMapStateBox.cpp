#include "EndNaviMapStateBox.h"

AEndNaviMapStateBox::AEndNaviMapStateBox() {
    this->LayerNumber = EEndNaviMapLayer::Layer_00;
    this->OpenGroupNumber = EEndNaviMapOpenGroup::OpenGroup_None;
    this->VisitGroupNumber = EEndNaviMapVisitGroup::VisitGroup_None;
    this->TargetState = EEndSceneNaviMapState::Unopened;
}

