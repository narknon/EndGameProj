#include "EndBattleSummonTargetPoint.h"

AEndBattleSummonTargetPoint::AEndBattleSummonTargetPoint() {
    this->bSpawn_All = true;
    this->bSpawn_Ifrit = false;
    this->bSpawn_Chocobo = false;
    this->bSpawn_Shiva = false;
    this->bSpawn_Leviathan = false;
    this->bSpawn_Bahamut = false;
    this->bSpawn_DebuChoco = false;
    this->bSpawn_Carbuncle = false;
    this->bSpawn_Sabotender = false;
    this->bSpawn_BabyChocobo = false;
    this->bSpawn_Ramuh = false;
    this->bWarp_Ifrit = true;
    this->bWarp_Chocobo = true;
    this->bWarp_Shiva = true;
    this->bWarp_Leviathan = true;
    this->bWarp_Bahamut = true;
    this->bWarp_DebuChoco = true;
    this->bWarp_Carbuncle = true;
    this->bWarp_Sabotender = true;
    this->bWarp_BabyChocobo = true;
    this->bWarp_Ramuh = false;
    this->bCutScene = true;
    this->bResetLocation = false;
    this->bOmen = false;
    this->bLevelCutScene = false;
    this->bFreeze = true;
}

