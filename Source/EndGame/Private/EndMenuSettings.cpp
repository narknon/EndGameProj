#include "EndMenuSettings.h"

UEndMenuSettings::UEndMenuSettings() {
    this->ColorMappings.AddDefaulted(10);
    this->ButtonMappings.AddDefaulted(169);
    this->MemberJoinMappings.AddDefaulted(9);
    this->CommandMenuMemberMappings.AddDefaulted(9);
    this->MenuBattleAngleY = 1;
    this->SubtitleWaitTime = 1;
    this->PlayTimeSleepTime = 1;
}

