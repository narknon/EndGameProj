#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndShopMenuPriceColors.h"
#include "EndShopMenu.generated.h"

class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndShopMenu : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _SelectNumberSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndShopMenuPriceColors _PriceColor;
    
    UEndShopMenu();
    UFUNCTION(BlueprintCallable)
    void OnShopListCellSetup(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnShopListCellCliked();
    
    UFUNCTION(BlueprintCallable)
    void OnShopDefaultCellSetup(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnShopChadolyCellSetup(UWidget* ItemWidget, int32 ItemIndex);
    
};

