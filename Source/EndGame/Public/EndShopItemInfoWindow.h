#pragma once
#include "CoreMinimal.h"
#include "EndMainEquipInfoWindowBase.h"
#include "UObject/NoExportTypes.h"
#include "EndShopItemInfoWindow.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndShopItemInfoWindow : public UEndMainEquipInfoWindowBase {
    GENERATED_BODY()
public:
    UEndShopItemInfoWindow();
protected:
    UFUNCTION(BlueprintCallable)
    FVector2D OnMeasureInfoListSize(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnMateriaInfoListSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCoreListSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
};

