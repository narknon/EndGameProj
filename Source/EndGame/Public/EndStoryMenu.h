#pragma once
#include "CoreMinimal.h"
#include "EndMapJournalMenuWindow.h"
#include "EndStoryMenu.generated.h"

class UWidgetAnimation;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndStoryMenu : public UEndMapJournalMenuWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CurrentAnimation;
    
public:
    UEndStoryMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnLeftMenuSetupItem(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftMenuSelectedIndexChanged(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLeftMenuPressedItem(int32 ItemIndex);
    
};

