#pragma once
#include "CoreMinimal.h"
#include "EndNaviMapLayerPrototypeData.h"
#include "EndNaviMapLocationPrototypeData.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndNaviMapLocationPrototypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndNaviMapLayerPrototypeData> Layers;
    
    FEndNaviMapLocationPrototypeData();
};

