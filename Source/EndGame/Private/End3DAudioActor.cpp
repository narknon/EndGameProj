#include "End3DAudioActor.h"

AEnd3DAudioActor::AEnd3DAudioActor() {
    this->_autoPlayDist = 1;
    this->_useType = EEnd3DAudioActorUseType::JukeBox;
    this->_overwriteAttenuationSetting = NULL;
}

