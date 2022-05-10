#pragma once
#include "CoreMinimal.h"
#include "EndUserWidget.h"
#include "EndChocoboFastTravelMenu.generated.h"

class UWidgetAnimation;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndChocoboFastTravelMenu : public UEndUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayingAnimation;
    
public:
    UEndChocoboFastTravelMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnPointsListSetupItem(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPointsListPressedItem(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPointsListIndexChanged(int32 ItemIndex);
    
};

