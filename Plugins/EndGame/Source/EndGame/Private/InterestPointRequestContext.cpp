#include "InterestPointRequestContext.h"

FInterestPointRequestContext::FInterestPointRequestContext() {
    this->Type = EEndInterestPointReactionActorType::Player;
    this->Radius = 1;
    this->TemplateId = EEndInterestPointTemplate::None;
}

