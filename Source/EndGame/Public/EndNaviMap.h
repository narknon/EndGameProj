#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndNaviMap.generated.h"

class UTextureRenderTarget2D;
class UEndNaviMapPrototypeData;
class UEndNaviMapPrototypeDataV2;

UCLASS(Blueprintable)
class UEndNaviMap : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PixelPerCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndNaviMapPrototypeData* PrototypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndNaviMapPrototypeDataV2* PrototypeDataV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* MaskTexture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> IconWidgets;
    
public:
    UEndNaviMap();
    UFUNCTION(BlueprintCallable)
    void SetPosition3D(const FVector& InPos);
    
    UFUNCTION(BlueprintCallable)
    FVector2D ConvertToPosition2D(const FVector& InPos);
    
};

