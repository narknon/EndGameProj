#pragma once
#include "CoreMinimal.h"
#include "EndAutoSeComponentAssetTablePerAttribute.generated.h"

USTRUCT(BlueprintType)
struct FEndAutoSeComponentAssetTablePerAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SoundIndexes[6];
    
    ENDGAME_API FEndAutoSeComponentAssetTablePerAttribute();
};

