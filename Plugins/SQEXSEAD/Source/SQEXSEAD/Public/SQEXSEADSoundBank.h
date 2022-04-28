#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADSoundBank.generated.h"

class UAssetImportData;

UCLASS(EditInlineNew, MinimalAPI)
class USQEXSEADSoundBank : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAssetImportData* AssetImportData;
    
    USQEXSEADSoundBank();
};

