#pragma once
#include "CoreMinimal.h"
#include "EEndSoundLayer.generated.h"

UENUM()
enum class EEndSoundLayer : uint8 {
    Pause_ON,
    Pause_OFF,
    Skip_Cut,
    Reset_Game,
    Movie_IN,
    Movie_OUT,
    Menu_Open,
    Menu_Close,
    Title_IN,
    Title_OUT,
    JBMusic_FocusMode_ON,
    JBMusic_FocusMode_OFF,
    WaitMode_ON,
    WaitMode_OFF,
    Game_Blackout_IN,
    Game_Blackout_OUT,
    Level_Blackout_IN,
    Level_Blackout_OUT,
    CutScene_IN,
    CutScene_OUT,
    MiniGameMenu_IN,
    MiniGameMenu_OUT,
    _MAX UMETA(Hidden),
};

