#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EndAutoSeComponentAssetTablePerAttribute.h"
#include "EndAutoSeComponentAssetTableNonAttribute.h"
#include "EndAutoSeComponentSoundIndexTable.generated.h"

UCLASS(Blueprintable)
class UEndAutoSeComponentSoundIndexTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEndAutoSeComponentAssetTablePerAttribute PerAttribute[30];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndAutoSeComponentAssetTableNonAttribute NonAttribute;
    
    UEndAutoSeComponentSoundIndexTable();
};

