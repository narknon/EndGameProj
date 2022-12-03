#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeComponentAssetTablePerSurface.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADAutoSeComponentAssetTableNonSurface.h"
#include "SQEXSEADSurfaceAssetReferenceTableData.h"
#include "SQEXSEADAutoSeComponentAssetTable.generated.h"

UCLASS(Blueprintable)
class SQEXSEAD_API USQEXSEADAutoSeComponentAssetTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSQEXSEADAutoSeComponentAssetTablePerSurface PerSurfaceInfos[63];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAutoSeComponentAssetTableNonSurface NonSurfaceInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADSurfaceAssetReferenceTableData AuxSurfaceAssetTable;
    
    USQEXSEADAutoSeComponentAssetTable();
};

