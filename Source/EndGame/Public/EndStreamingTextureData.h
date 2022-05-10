#pragma once
#include "CoreMinimal.h"
#include "EndStreamingTextureData.generated.h"

USTRUCT(BlueprintType)
struct FEndStreamingTextureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MipMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMipMap;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    ENDGAME_API FEndStreamingTextureData();
};

