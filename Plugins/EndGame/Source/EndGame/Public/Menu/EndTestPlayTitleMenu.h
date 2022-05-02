#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EndSimpleMenu.h"
#include "Sound/SlateSound.h"
#include "EndTestPlayTitleMenu.generated.h"

class UWidget;
class UEndUserWidget;
class UEndTrialOrderWindow;

UCLASS(Blueprintable, EditInlineNew)
class UEndTestPlayTitleMenu : public UEndSimpleMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound DecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEndUserWidget> OrderWindowWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UWidget* FocusedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEndTrialOrderWindow* OrderWindow;
    
public:
    UEndTestPlayTitleMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnStartButtonClicked();
    
};

