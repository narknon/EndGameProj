#pragma once
#include "CoreMinimal.h"
#include "SlateTypes.h"
#include "SProgressBar.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ProgressBarStyle -FallbackName=ProgressBarStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EProgressBarFillType -FallbackName=EProgressBarFillType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EndGauge.generated.h"

UCLASS()
class UEndGauge : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FProgressBarStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Value;
    
    UPROPERTY()
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PreviewValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValue;
    
    UPROPERTY()
    UWidget::FGetFloat MaxValueDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EProgressBarFillType::Type> BarFillType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D BorderPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FillColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor FillColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FillEndColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor FillEndColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor PreviewColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor PreviewColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush PreviewBrush;
    
    UEndGauge();
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewValue(float InPreviewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewColorAndOpacity(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float InMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFillEndColorAndOpacity(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetFillColorAndOpacity(FLinearColor InColor);
    
};

