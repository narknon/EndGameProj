#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCharaPopPack.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCharaPopPack : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AssetName_Array;
    
    FEndDataTableCharaPopPack();
};

