#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EndTextureStream.h"
#include "EndTexturePump.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndTexturePump : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialLoadNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InAdvance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndTextureStream> TextureStream;
    
public:
    UEndTexturePump();
};

