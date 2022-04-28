#pragma once
#include "CoreMinimal.h"
#include "Engine/TextureRenderTarget2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureRenderTarget2D -FallbackName=TextureRenderTarget2D
#include "EndMenuTextureRenderTarget2D.generated.h"

UCLASS()
class ENDGAME_API UEndMenuTextureRenderTarget2D : public UTextureRenderTarget2D {
    GENERATED_BODY()
public:
    UEndMenuTextureRenderTarget2D();
};

