#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "EndMainMenuWindow.h"
#include "EndMainSystemMenu.generated.h"

class UEndUserWidget;
class UEndNewOptionsMenu;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndMainSystemMenu : public UEndMainMenuWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEndUserWidget> OptionsMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEndUserWidget> ChapterSelectWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> _BillboardImagePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEndUserWidget* PlaylogList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEndNewOptionsMenu* OptionsMenu;
    
public:
    UEndMainSystemMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnLeftMenuSetupItem(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftMenuPressedItem(int32 ItemIndex);
    
};

