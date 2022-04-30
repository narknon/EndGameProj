#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SQEXSEADSurfaceNameTable.generated.h"

UCLASS(Blueprintable)
class SQEXSEAD_API USQEXSEADSurfaceNameTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Names[63];
    
    USQEXSEADSurfaceNameTable();
};

