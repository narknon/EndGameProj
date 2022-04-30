#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndNaviMap.generated.h"

class UEndNaviMapPrototypeData;
class UEndNaviMapPrototypeDataV2;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UEndNaviMap : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(EditAnywhere)
    float PixelPerCm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndNaviMapPrototypeData* PrototypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndNaviMapPrototypeDataV2* PrototypeDataV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* MaskTexture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> IconWidgets;
    
public:
    UEndNaviMap();
    UFUNCTION(BlueprintCallable)
    void SetPosition3D(const FVector& InPos);
    
    UFUNCTION(BlueprintCallable)
    FVector2D ConvertToPosition2D(const FVector& InPos);
    
};

