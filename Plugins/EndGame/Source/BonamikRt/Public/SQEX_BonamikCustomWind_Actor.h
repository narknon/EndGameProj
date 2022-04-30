#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikWind_Actor.h"
#include "CustomWindSettings.h"
#include "SQEX_BonamikCustomWind_Actor.generated.h"

UCLASS(Blueprintable)
class BONAMIKRT_API ASQEX_BonamikCustomWind_Actor : public ASQEX_BonamikWind_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomWindSettings m_WindSetting;
    
    ASQEX_BonamikCustomWind_Actor();
};

