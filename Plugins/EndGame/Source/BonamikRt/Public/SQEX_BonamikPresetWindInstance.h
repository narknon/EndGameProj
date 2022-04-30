#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikPresetWindInstance.generated.h"

class USQEX_BonamikWind;

USTRUCT(BlueprintType)
struct BONAMIKRT_API FSQEX_BonamikPresetWindInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEX_BonamikWind* m_Wind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> m_TargetGroups;
    
    FSQEX_BonamikPresetWindInstance();
};

