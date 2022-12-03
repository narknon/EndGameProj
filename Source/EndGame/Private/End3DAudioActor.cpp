#include "End3DAudioActor.h"

AEnd3DAudioActor::AEnd3DAudioActor() {
    this->_autoPlayDist = 5000.00f;
    this->_useType = EEnd3DAudioActorUseType::JukeBox;
    this->_overwriteAttenuationSetting = NULL;
}

