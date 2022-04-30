#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEX_BonamikPresetWindSettings.h"
#include "SQEX_BonamikWindCollectionAsset.generated.h"

UCLASS(Blueprintable)
class BONAMIKRT_API USQEX_BonamikWindCollectionAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_BonamikPresetWindSettings> m_BonamikPresetWindSettings;
    
    USQEX_BonamikWindCollectionAsset();
};

