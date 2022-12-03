#include "EndMenuSettings.h"

UEndMenuSettings::UEndMenuSettings() {
    this->ColorMappings.AddDefaulted(10);
    this->ButtonMappings.AddDefaulted(169);
    this->MemberJoinMappings.AddDefaulted(9);
    this->CommandMenuMemberMappings.AddDefaulted(9);
    this->MenuBattleAngleY = 20.00f;
    this->SubtitleWaitTime = 0.10f;
    this->PlayTimeSleepTime = 180.00f;
}

