#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikPresetWindInstance.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_BonamikWindController.generated.h"

class UWorld;
class USQEX_BonamikWind;

USTRUCT(BlueprintType)
struct BONAMIKRT_API FSQEX_BonamikWindController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    FSQEX_BonamikPresetWindInstance m_PresetWind[10];
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<USQEX_BonamikWind>> m_WindSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_CurrentGlobalWindForce;
    
    UPROPERTY(EditAnywhere)
    float m_GlobalWindScale;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UWorld> RefWorld;
    
public:
    FSQEX_BonamikWindController();
};

