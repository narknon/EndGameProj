#include "OSDKSettings.h"

UOSDKSettings::UOSDKSettings() {
    this->bCreateOSDKOnInit = true;
    this->bEnableSteam = true;
    this->bNoSteamInEditorMode = false;
    this->bUseProvidedLibcurl = false;
    this->DefaultRevision = TEXT("1");
    this->OSDKLogLevel = EOSDKLogLevel::LEVEL_INFO;
    this->OSDKHTTPClientLoggingFlags = EOSDKHTTPClientLoggingFlags::LOG_DEFAULT;
}

