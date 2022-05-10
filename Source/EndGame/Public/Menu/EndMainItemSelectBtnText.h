#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndMainItemSelectBtnText.generated.h"

class UEndTextBlock;
class UEndCanvasPanel;
class UEndButton;

UCLASS(Blueprintable, EditInlineNew)
class UEndMainItemSelectBtnText : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndUserWidget* Icon_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextBlock* Txt_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextBlock* Icon_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextBlock* Txt_Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndCanvasPanel* Pnl_AutoMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndButton* SelectBtn;
    
    UEndMainItemSelectBtnText();
};

