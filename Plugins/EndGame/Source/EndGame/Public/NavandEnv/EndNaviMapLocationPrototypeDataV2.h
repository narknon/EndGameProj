#pragma once
#include "CoreMinimal.h"
#include "EndNaviMapLayerPrototypeDataV2.h"
#include "EndNaviMapLocationPrototypeDataV2.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndNaviMapLocationPrototypeDataV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndNaviMapLayerPrototypeDataV2> Layers;
    
    FEndNaviMapLocationPrototypeDataV2();
};

