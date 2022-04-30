#include "EndInterestPoint.h"

AEndInterestPoint::AEndInterestPoint() {
    this->Type = EEndInterestPointReactionActorType::Player;
    this->InterestRadius = 1;
    this->InterestTemplateID = EEndInterestPointTemplate::None;
    this->IsForcedRecognition = false;
    this->TextRenderComponent = NULL;
}

