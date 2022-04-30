#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "Engine/EngineTypes.h"
#include "Components/Widget.h"
#include "EndCircle.generated.h"

class UTexture2DDynamic;
class UTexture2D;
class UMaterialInterface;
class USlateBrushAsset;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UEndCircle : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetSlateBrush BrushDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor ColorAndOpacityDelegate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBlendMode> BlendMode;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat RadiusDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSides;
    
    UPROPERTY(EditAnywhere)
    float StartAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat StartAngleDelegate;
    
    UPROPERTY(EditAnywhere)
    float EndAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat EndAngleDelegate;
    
    UEndCircle();
    UFUNCTION(BlueprintCallable)
    void SetStartAngle(float InAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetNumSides(int32 InNumSides);
    
    UFUNCTION(BlueprintCallable)
    void SetEndAngle(float InAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromAsset(USlateBrushAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendMode(TEnumAsByte<EBlendMode> InBlendMode);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterial();
    
};

