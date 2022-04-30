#include "EndDataTablePlannerEvent.h"

FEndDataTablePlannerEvent::FEndDataTablePlannerEvent() {
    this->Time = 1;
    this->MinSubtitleTime = 1;
    this->TimeAfterVoice = 1;
    this->OutputType = 0;
    this->CanSkip = 0;
    this->VoiceType = 0;
    this->CameraType = 0;
    this->OverwriteLight = 0;
    this->TalkerEmotionType = 0;
    this->TalkerCmd = 0;
    this->TalkerHide = 0;
    this->DisallowTalkIDOverwrite = 0;
}

