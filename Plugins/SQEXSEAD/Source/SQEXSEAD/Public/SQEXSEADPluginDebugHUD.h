#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "SQEXSEADPluginDebugHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASQEXSEADPluginDebugHUD : public AHUD {
    GENERATED_BODY()
public:
    ASQEXSEADPluginDebugHUD();
};

