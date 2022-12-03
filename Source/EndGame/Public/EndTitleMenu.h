#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EndSimpleMenu.h"
#include "EndTitleMenu.generated.h"

class UUserWidget;
class UEndUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndTitleMenu : public UEndSimpleMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> StartMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> StartMenu00WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> StartMenu01WidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEndUserWidget* Throbber;
    
public:
    UEndTitleMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnStartMenuEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAnyButton();
    
};

