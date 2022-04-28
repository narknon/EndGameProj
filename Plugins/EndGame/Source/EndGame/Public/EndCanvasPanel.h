#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "EndCanvasPanel.generated.h"

class UWidget;
class UEndCanvasPanelSlot;

UCLASS()
class ENDGAME_API UEndCanvasPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ContentColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor ContentColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bExplicitChildZOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FieldOfView;
    
    UEndCanvasPanel();
    UFUNCTION(BlueprintCallable)
    void SetProjectionMode(TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(float InFieldOfView);
    
    UFUNCTION(BlueprintCallable)
    void SetExplicitChildZOrder(bool bInExplicitChildZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    UEndCanvasPanelSlot* AddChildToCanvas(UWidget* Content);
    
};

