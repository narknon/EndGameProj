#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndSortWindow.generated.h"

class UEndVirtualScrollBox;
class UEndTextBlock;
class UEndBorder;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndSortWindow : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndVirtualScrollBox* Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextBlock* Txt_Btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndBorder* Sort_EquipMark;
    
    UEndSortWindow();
private:
    UFUNCTION(BlueprintCallable)
    void OnSortListSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSortListPressedItem(int32 CellIndex);
    
};

