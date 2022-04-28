#pragma once
#include "CoreMinimal.h"
#include "CanvasPanelSlot.h"
#include "EndCanvasPanelSlot.generated.h"

UCLASS(BlueprintType)
class ENDGAME_API UEndCanvasPanelSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAnchorData LayoutData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bAutoSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bDelayedBuild;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ZOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float XAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float YAngle;
    
    UEndCanvasPanelSlot();
    UFUNCTION(BlueprintCallable)
    void SetZOrder(int32 InZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SetYAngle(float InYAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetXAngle(float InYAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector2D InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(FVector2D InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsets(FMargin InOffset);
    
    UFUNCTION()
    void SetMinimum(FVector2D InMinimumAnchors);
    
    UFUNCTION()
    void SetMaximum(FVector2D InMaximumAnchors);
    
    UFUNCTION(BlueprintCallable)
    void SetLayout(const FAnchorData& InLayoutData);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSize(bool InbAutoSize);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchors(FAnchors InAnchors);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignment(FVector2D InAlignment);
    
    UFUNCTION(BlueprintPure)
    int32 GetZOrder() const;
    
    UFUNCTION(BlueprintPure)
    float GetYAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetXAngle() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetSize() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetPosition() const;
    
    UFUNCTION(BlueprintPure)
    FMargin GetOffsets() const;
    
    UFUNCTION(BlueprintPure)
    FAnchorData GetLayout() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAutoSize() const;
    
    UFUNCTION(BlueprintPure)
    FAnchors GetAnchors() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetAlignment() const;
    
};

