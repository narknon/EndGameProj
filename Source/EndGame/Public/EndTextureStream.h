#pragma once
#include "CoreMinimal.h"
#include "EndStreamingTextureData.h"
#include "EndTextureStream.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FEndTextureStream {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndStreamingTextureData> TextureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Textures;
    
    ENDGAME_API FEndTextureStream();
};

