#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SQEXSEAD_StructsAndEnums.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADAutoSeComponentSetting.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADAutoSeComponentSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSQEXSEADAutoSeComponentInitParams InitParams;
    
    USQEXSEADAutoSeComponentSetting();
};

