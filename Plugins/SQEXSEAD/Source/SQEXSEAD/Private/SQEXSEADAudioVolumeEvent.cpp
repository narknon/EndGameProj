#include "SQEXSEADAudioVolumeEvent.h"

FSQEXSEADAudioVolumeEvent::FSQEXSEADAudioVolumeEvent() {
    this->Command = ESQEXSEADAudioVolumeCommand::None;
    this->ExteriorAudioVolumeSoundOcclusionVolume = 1;
    this->ExteriorAudioVolumeSoundOcclusionLPF = 1;
    this->ObstructionVolume = 1;
    this->ObstructionLPF = 1;
    this->FadeTime = 1;
}

