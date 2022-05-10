#pragma once
#include "CoreMinimal.h"
#include "EndGlyphInfo.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndGlyphInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 TextureIndex;
    
    UPROPERTY(EditAnywhere)
    uint16 TextureX;
    
    UPROPERTY(EditAnywhere)
    uint16 TextureY;
    
    UPROPERTY(EditAnywhere)
    uint16 SizeX;
    
    UPROPERTY(EditAnywhere)
    uint16 SizeY;
    
    UPROPERTY(EditAnywhere)
    int16 HorizontalOffset;
    
    UPROPERTY(EditAnywhere)
    int16 VerticalOffset;
    
    UPROPERTY(EditAnywhere)
    int16 XAdvance;
    
    FEndGlyphInfo();
};

