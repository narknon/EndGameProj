#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SQEX_GameMode.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ASQEX_GameMode : public AGameMode {
    GENERATED_BODY()
public:
    ASQEX_GameMode();
};

