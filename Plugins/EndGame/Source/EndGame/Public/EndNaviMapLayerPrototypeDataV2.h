#pragma once
#include "CoreMinimal.h"
#include "EndNaviMapLayerPrototypeDataV2.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndNaviMapLayerPrototypeDataV2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PseudoLocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LongName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShortName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AreaNames;
    
    FEndNaviMapLayerPrototypeDataV2();
};

