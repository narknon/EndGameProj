#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSoundKey.h"
#include "BikeSeAsset.generated.h"

USTRUCT(BlueprintType)
struct FBikeSeAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADSoundKey Key;
    
    UPROPERTY(EditAnywhere)
    float FadeInTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPointName;
    
    ENDGAME_API FBikeSeAsset();
};

