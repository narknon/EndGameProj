#pragma once
#include "CoreMinimal.h"
#include "EndGlyphInfo.h"
#include "EndFont.generated.h"

class UTexture2D;

UCLASS()
class ENDGAME_API UEndFont : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UTexture2D*> Textures;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint16, FEndGlyphInfo> GlyphTable;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FString, uint16> IconTable;
    
    UPROPERTY(VisibleAnywhere)
    int32 Size;
    
    UPROPERTY(VisibleAnywhere)
    int32 OutlineSize;
    
protected:
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UTexture2D*> AllTextures;
    
public:
    UEndFont();
};

