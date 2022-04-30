#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikPresetWindSettings.generated.h"

class USQEX_BonamikWindDesc;

USTRUCT(BlueprintType)
struct BONAMIKRT_API FSQEX_BonamikPresetWindSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_BonamikWindDesc* m_WindDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_TargetGroups;
    
    FSQEX_BonamikPresetWindSettings();
};

