#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCharaPopAsset.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCharaPopAsset : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsedPhysMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsedGPUMemory;
    
    FEndDataTableCharaPopAsset();
};

