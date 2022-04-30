#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SQEXSEADSoundBank.generated.h"

class UAssetImportData;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USQEXSEADSoundBank : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAssetImportData* AssetImportData;
    
    USQEXSEADSoundBank();
};

