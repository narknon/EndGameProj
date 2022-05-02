#pragma once
#include "CoreMinimal.h"
#include "EndMainMenuWindow.h"
#include "EndMainManualMenu.generated.h"

class UEndCanvasPanel;
class UEndVirtualScrollBox;
class UEndTextBlock;
class UEndImageSet;
class UEndBillboard;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndMainManualMenu : public UEndMainMenuWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndVirtualScrollBox* LeftMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndCanvasPanel* Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextBlock* Txt_Category_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextBlock* Txt_Detail_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndImageSet* Title_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndVirtualScrollBox* DetailScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndBillboard* Billboard_CategoryImg;
    
public:
    UEndMainManualMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnLeftMenuSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftMenuSelectedIndexChanged(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftMenuPressedItem(int32 CellIndex);
    
};

