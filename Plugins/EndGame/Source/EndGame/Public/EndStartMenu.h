#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EndUserWidget.h"
#include "Sound/SlateSound.h"
#include "EndStartMenu.generated.h"

class UWidget;
class UEndMainMenu;
class UEndNewOptionsMenu;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEndStartMenu : public UEndUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEndUserWidget> LoadMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEndUserWidget> OptionsMenuWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEndUserWidget> DlcWindowWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEndUserWidget> MembershipWindowWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound NewGameSound;
    
    UPROPERTY(EditAnywhere)
    float ButtonAnimationStartTime;
    
    UPROPERTY(EditAnywhere)
    float ButtonAnimationDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEndUserWidget* Throbber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEndUserWidget* CachedLoadMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEndMainMenu* MainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEndNewOptionsMenu* OptionsMenu;
    
public:
    UEndStartMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnSaveDataSetupItem(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveDataSelectedIndexChanged(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveDataPressedItem(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveDataClicked(UUserWidget* Cell);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveDataCancelled();
    
    UFUNCTION(BlueprintCallable)
    void OnQuitGame();
    
    UFUNCTION(BlueprintCallable)
    void OnOptions();
    
    UFUNCTION(BlueprintCallable)
    void OnNewGame();
    
    UFUNCTION(BlueprintCallable)
    void OnMembershipUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadLatest();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadGame();
    
    UFUNCTION(BlueprintCallable)
    void OnListMenuSetupItem(UWidget* ItemWidget, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnListMenuSelectedIndexChanged(int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnListMenuPressedItem(int32 ItemIndex);
    
};

