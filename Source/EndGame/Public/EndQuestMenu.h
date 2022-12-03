#pragma once
#include "CoreMinimal.h"
#include "EndMapJournalMenuWindow.h"
#include "EndQuestMenu.generated.h"

class UWidgetAnimation;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndQuestMenu : public UEndMapJournalMenuWindow {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CurrentAnimation;
    
public:
    UEndQuestMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnQuestScrollBoxSetupItem(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestScrollBoxPressedItem(int32 ItemIndex);
    
};

