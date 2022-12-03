#pragma once
#include "CoreMinimal.h"
#include "EMenuItemCategory.h"
#include "EndUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "OptionInfos.h"
#include "UObject/NoExportTypes.h"
#include "EndNewOptionsMenu.generated.h"

class UEndDescriptionWindow;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndNewOptionsMenu : public UEndUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> _CategoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMenuItemCategory, FOptionInfos> _OptionItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> _BillboardImagePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEndDescriptionWindow* DescriptionWindow;
    
public:
    UEndNewOptionsMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnUnhoverSelectButton();
    
    UFUNCTION(BlueprintCallable)
    void OnSetupGaugeItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectListSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectListSelectedIndexChanged(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectListPressedItem(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionListSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionListSelectedIndexChanged(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionListPressedItem(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionListKeyboardSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionListKeyboardSelectedIndexChanged(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionListKeyboardPressedItem(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    FVector2D OnOptionListKeyboardMeasureItem(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnHoverSelectButton();
    
    UFUNCTION(BlueprintCallable)
    void OnControllerListSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnControllerListPressedItem(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCategoryListSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCategoryListSelectedIndexChanged(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCategoryListPressedItem(int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonTypeListSetupItem(UWidget* ItemWidget, int32 CellIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonTypeListPressedItem(int32 CellIndex);
    
};

