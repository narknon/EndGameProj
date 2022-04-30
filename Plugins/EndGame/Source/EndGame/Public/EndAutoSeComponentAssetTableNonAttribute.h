#pragma once
#include "CoreMinimal.h"
#include "EndAutoSeComponentAssetTableNonAttribute.generated.h"

USTRUCT(BlueprintType)
struct FEndAutoSeComponentAssetTableNonAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SoundIndexes[14];
    
    ENDGAME_API FEndAutoSeComponentAssetTableNonAttribute();
};

