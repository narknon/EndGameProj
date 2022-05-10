#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndEquipmentCell.generated.h"

class UEndBillboard;
class UEndImage;
class UEndImageSet;
class UEndTextBlock;
class UEndProgressBar;
class UEndCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UEndEquipmentCell : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndImageSet* Title_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextBlock* Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndCanvasPanel* AbilityBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndTextBlock* Txt_AccessoryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndImage* Icon_Clear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndProgressBar* Gauge_Exp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndBillboard* Billboard_Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndBillboard* Billboard_Weapon;
    
    UEndEquipmentCell();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEquipStatus(int32 Attack, int32 Defense, int32 MagicAttack, int32 MagicDefense);
    
};

