#include "EndInterestPoint.h"

AEndInterestPoint::AEndInterestPoint() {
    this->Type = EEndInterestPointReactionActorType::Npc;
    this->InterestRadius = 300.00f;
    this->InterestTemplateID = EEndInterestPointTemplate::Template00;
    this->IsForcedRecognition = false;
    this->TextRenderComponent = NULL;
}

