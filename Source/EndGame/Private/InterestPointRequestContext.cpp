#include "InterestPointRequestContext.h"

FInterestPointRequestContext::FInterestPointRequestContext() {
    this->Type = EEndInterestPointReactionActorType::Player;
    this->Radius = 0.00f;
    this->TemplateId = EEndInterestPointTemplate::None;
}

