#pragma once
#include "CoreMinimal.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SQEXSEADSurfaceAssetReferenceTable.generated.h"

UCLASS()
class SQEXSEAD_API USQEXSEADSurfaceAssetReferenceTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSQEXSEADSurfaceAssetReferenceTableData TableData;
    
    USQEXSEADSurfaceAssetReferenceTable();
};

