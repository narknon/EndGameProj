#pragma once
#include "CoreMinimal.h"
#include "EEndMenuPauseMode.h"
#include "EEndMenuMessageWindowFlags.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EEndMenuPopupMessageKind.h"
#include "EEndMenuPopupMessageFlags.h"
#include "EEndMenuDamageResistance.h"
#include "EEndMenuFieldTargetState.h"
#include "EEndMenuFieldTargetIconType.h"
#include "EEndMenuFieldPaneType.h"
#include "Engine/LatentActionManager.h"
#include "EndMenuDamageInfo.h"
#include "EEndMenuLogEffectKind.h"
#include "EEndMenuBattleTargetState.h"
#include "Styling/SlateColor.h"
#include "InputCoreTypes.h"
#include "EEndMenuFieldMenuStatus.h"
#include "EEndMenuIconKind.h"
#include "UObject/NoExportTypes.h"
#include "EEndMenuUIFilterType.h"
#include "EEndMenuTalkSelectWindowType.h"
#include "EEndMenuInputGuidelineType.h"
#include "EPlayerType.h"
#include "EEndMenuLockonMarkerType.h"
#include "EndMenuAPI.generated.h"

class UUserWidget;
class UMaterialInterface;
class AActor;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class UEndMenuAPI : public UObject {
    GENERATED_BODY()
public:
    UEndMenuAPI();
    UFUNCTION(BlueprintCallable)
    static void UpdateWidgetTest();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateMenu(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void ShowTalkLogs(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ShowSubtitle(UObject* WorldContextObject, const FString& TextID, bool bWaitKey, bool bArrowHidden);
    
    UFUNCTION(BlueprintCallable)
    static void ShowSkippingIcon(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ShowPopupMessage(UObject* WorldContextObject, FVector WorldPosition, EEndMenuPopupMessageKind Kind, int32 Value, int32 Magnificate, EEndMenuDamageResistance Resistance, EEndMenuPopupMessageFlags Flags);
    
    UFUNCTION(BlueprintCallable)
    static void ShowPauseMenu(UObject* WorldContextObject, EEndMenuPauseMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void ShowMovie(UObject* WorldContextObject, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* ShowMessageWindow(UObject* WorldContextObject, const FString& TextID, const TArray<FString>& OptionTextIds, EEndMenuMessageWindowFlags Flags);
    
    UFUNCTION(BlueprintCallable)
    static void ShowMessageLogs(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ShowLocationName(UObject* WorldContextObject, const FString& TextID, const FString& EnTextId);
    
    UFUNCTION(BlueprintCallable)
    static void ShowLoadingScreenForChocoboFastTravel(UObject* WorldContextObject, const FString& ChocoboText, FName LocationID);
    
    UFUNCTION(BlueprintCallable)
    static void ShowLoadingScreen(UObject* WorldContextObject, FName LocationID, bool ShowLocationTip);
    
    UFUNCTION(BlueprintCallable)
    static void ShowLoadingIcon(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ShowFollowingPopupMessage(UObject* WorldContextObject, AActor* Actor, FVector WorldPosition, EEndMenuPopupMessageKind Kind, int32 Value, int32 Magnificate, EEndMenuDamageResistance Resistance, EEndMenuPopupMessageFlags Flags);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* ShowFieldTargetIcon(UObject* WorldContextObject, FVector WorldPosition, EEndMenuFieldTargetState State, EEndMenuFieldTargetIconType aType);
    
    UFUNCTION(BlueprintCallable)
    static void ShowFieldPane(EEndMenuFieldPaneType Type);
    
    UFUNCTION(BlueprintCallable)
    static void ShowFieldMenu(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDebugListBox(UObject* WorldContextObject, const TArray<FString>& InStringArray, float InWidth, float InHeight, bool InSingleNodeAutoClick, FString& OutString, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDamagePopupMessage(UObject* WorldContextObject, AActor* Actor, FVector WorldPosition, EEndMenuPopupMessageKind Kind, const FEndMenuDamageInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    static void ShowChapterName(UObject* WorldContextObject, const FString& TextID, const FString& EnTextId);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* ShowBattleTargetIcon(UObject* WorldContextObject, FVector WorldPosition, EEndMenuBattleTargetState State);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* ShowBattlePlayerStatusWindow();
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* ShowBattleEnemyStatusWindow();
    
    UFUNCTION(BlueprintCallable)
    static void ShowBattleEnemyOutsideWindow();
    
    UFUNCTION(BlueprintCallable)
    static void ShowAreaName(UObject* WorldContextObject, const FString& TextID);
    
    UFUNCTION(BlueprintCallable)
    static void SetVirtualAcceptRight(bool bRight);
    
    UFUNCTION(BlueprintCallable)
    static void SetNavimapInBattle(bool bInInBattle);
    
    UFUNCTION(BlueprintCallable)
    static void SetFocusToWidget(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    static void SetFocusBrushBySlateColor(FSlateColor InColor);
    
    UFUNCTION(BlueprintCallable)
    static void SetFieldTargetIconPosition(UUserWidget* Icon, FVector WorldPosition);
    
    UFUNCTION(BlueprintCallable)
    static void SetFieldTargetIconHoldGauge(UUserWidget* Icon, float aGauge);
    
    UFUNCTION(BlueprintCallable)
    static void SetFieldMenuInBattle(bool bInInBattle);
    
    UFUNCTION(BlueprintCallable)
    static void SetFadeFilterVisibility(FName Name, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBattleTargetIconPosition(UUserWidget* Icon, FVector WorldPosition);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleTargetIconActor(UUserWidget* Icon, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleEnemyStatusWindowPosition(UUserWidget* Icon, FVector WorldPosition);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveFadeFilter(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshStatusWindow();
    
    UFUNCTION(BlueprintCallable)
    static bool Need4KFont();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftClassPtr<UObject> MakeSoftClassPtr(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    static bool LocationNameExists(const FString& TextID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsVirtualBack(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Key_IsVirtualAccept(const FKey& Key);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSubtitleClosed(const FString& TextID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPauseMenuClosed();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMessageWindowClosed(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static bool IsJoinLeftUpdate();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFieldMenuStatus(EEndMenuFieldMenuStatus Status);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFieldMenuShortcutActive();
    
    UFUNCTION(BlueprintCallable)
    static bool IsFadeFilterDuringAnimation(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFadeFilter(FName Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleTargetIconActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void HideTalkLogs();
    
    UFUNCTION(BlueprintCallable)
    static void HideSubtitle(const FString& TextID);
    
    UFUNCTION(BlueprintCallable)
    static void HideSkippingIcon();
    
    UFUNCTION(BlueprintCallable)
    static void HidePauseMenu();
    
    UFUNCTION(BlueprintCallable)
    static void HideMovie();
    
    UFUNCTION(BlueprintCallable)
    static void HideMessageWindow(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void HideMessageLogs();
    
    UFUNCTION(BlueprintCallable)
    static void HideLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void HideLoadingIcon();
    
    UFUNCTION(BlueprintCallable)
    static void HideFieldTargetIcon(UUserWidget* Icon);
    
    UFUNCTION(BlueprintCallable)
    static void HideFieldPane(EEndMenuFieldPaneType Type);
    
    UFUNCTION(BlueprintCallable)
    static void HideFieldMenu();
    
    UFUNCTION(BlueprintCallable)
    static void HideFieldAction();
    
    UFUNCTION(BlueprintCallable)
    static void HideBattleTargetIcon(UUserWidget* Icon);
    
    UFUNCTION(BlueprintCallable)
    static void HideBattlePlayerStatusWindow();
    
    UFUNCTION(BlueprintCallable)
    static void HideBattleEnemyStatusWindow();
    
    UFUNCTION(BlueprintCallable)
    static void HideBattleEnemyOutsideWindow();
    
    UFUNCTION(BlueprintCallable)
    static bool HasFadeFiltersDuringAnimation();
    
    UFUNCTION(BlueprintCallable)
    static bool HasFadeFilters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetWidgetAnimations(UWidget* InWidget, TArray<FName>& outNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWidgetAnimation* GetWidgetAnimationByName(UWidget* InWidget, FName InName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetString(const FString& TextID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMessageWindowSelectedIndex(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static EEndMenuIconKind GetItemMessageLogIconKind(FName ItemID);
    
    UFUNCTION(BlueprintCallable)
    static EEndMenuFieldTargetState GetFieldTargetIconState(UUserWidget* Icon);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFadeFilterVisibility(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void GetFadeFilterNames(TArray<FName>& outNames);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetFadeFilterCurrentColor(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static EEndMenuBattleTargetState GetBattleTargetIconState(UUserWidget* Icon);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* CreateWidgetFromPack(UObject* WorldContextObject, FName LevelName, FName ResourceName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearTalkLogs();
    
    UFUNCTION(BlueprintCallable)
    static void ClearMessageWindows();
    
    UFUNCTION(BlueprintCallable)
    static void ClearLocationTitles();
    
    UFUNCTION(BlueprintCallable)
    static void ClearFadeFilters();
    
    UFUNCTION(BlueprintCallable)
    static bool ChapterNameExists(const FString& TextID);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeFieldTargetIconState(UUserWidget* Icon, EEndMenuFieldTargetState State);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeFieldTargetIconButton(UUserWidget* Icon, EEndMenuFieldTargetIconType aButtonType);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeFadeFilter(FName Name, FLinearColor ToColor, float FadeTime, bool bAutoDestroy, bool bPauseable);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeBattleTargetIconState(UUserWidget* Icon, EEndMenuBattleTargetState State);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowVisionIcon(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowUIFilterWindow(UObject* WorldContextObject, EEndMenuUIFilterType aFilterType);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowTalkSelect(UObject* WorldContextObject, EEndMenuTalkSelectWindowType aWindowType);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowNavimap(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowGameOver(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowFieldStaminaIcon(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowFieldInputGuidelineWindow(UObject* WorldContextObject, EEndMenuInputGuidelineType aType);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowFieldAction(const FString& aActionTextId);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowEventProgress(UObject* WorldContextObject, const FString& aShowText);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowDataAccessIcon(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowCountdown(UObject* WorldContextObject, float SetTime);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowCharacterReJoin(UObject* WorldContextObject, bool bIsLeftOut);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowCharacterJoin(UObject* WorldContextObject, EPlayerType PlayerType, bool bIsIn);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowCaution(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowBossStatus(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowBattleTutorialWindow(UObject* WorldContextObject, FName aKey);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* BPShowBattleLockonMarkerIcon(UObject* WorldContextObject, FVector WorldPosition, EEndMenuLockonMarkerType aType);
    
    UFUNCTION(BlueprintCallable)
    static void BPShowBattleEscape(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void BPSetFieldStaminaSpeed(float aSpeedQt);
    
    UFUNCTION(BlueprintCallable)
    static void BPSetFieldStaminaGauge(float aGaugeQt);
    
    UFUNCTION(BlueprintCallable)
    static void BPSetCountdownTime(float SetTime);
    
    UFUNCTION(BlueprintCallable)
    static void BPSetCautionQuantity(float aQT);
    
    UFUNCTION(BlueprintCallable)
    static void BPSetBossHPGauge(float aHP);
    
    UFUNCTION(BlueprintCallable)
    static void BPSetBossDamageLidHP(float aHP);
    
    UFUNCTION(BlueprintCallable)
    static void BPHideVisionIcon();
    
    UFUNCTION(BlueprintCallable)
    static void BPHideUIFilterWindow(EEndMenuUIFilterType aFilterType);
    
    UFUNCTION(BlueprintCallable)
    static void BPHideTalkSelect();
    
    UFUNCTION(BlueprintCallable)
    static void BPHideNavimap();
    
    UFUNCTION(BlueprintCallable)
    static void BPHideGameOver();
    
    UFUNCTION(BlueprintCallable)
    static void BPHideFieldStaminaIcon();
    
    UFUNCTION(BlueprintCallable)
    static void BPHideFieldInputGuidelineWindow();
    
    UFUNCTION(BlueprintCallable)
    static void BPHideEventProgress(bool aAnimation);
    
    UFUNCTION(BlueprintCallable)
    static void BPHideDataAccessIcon();
    
    UFUNCTION(BlueprintCallable)
    static void BPHideCountdown(bool aHideFailed);
    
    UFUNCTION(BlueprintCallable)
    static void BPHideCharacterReJoin();
    
    UFUNCTION(BlueprintCallable)
    static void BPHideCharacterJoin();
    
    UFUNCTION(BlueprintCallable)
    static void BPHideCaution(bool aInBattle);
    
    UFUNCTION(BlueprintCallable)
    static void BPHideBossStatus();
    
    UFUNCTION(BlueprintCallable)
    static void BPHideBattleTutorialWindow(FName aKey);
    
    UFUNCTION(BlueprintCallable)
    static void BPHideBattleEscape(bool aInBattle);
    
    UFUNCTION(BlueprintCallable)
    static bool AreaNameExists(const FString& TextID);
    
    UFUNCTION(BlueprintCallable)
    static void AddTalkLogByTextId(const FString& TextID, float WaitSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessageLog_AnyThread(EEndMenuIconKind Icon, const FString& Message, EEndMenuLogEffectKind Effect);
    
    UFUNCTION(BlueprintCallable)
    static void AddFadeFilter(UObject* WorldContextObject, FName Name, int32 ZOrder, FLinearColor FromColor, FLinearColor ToColor, float FadeTime, bool bAutoDestroy, bool bPauseable);
    
};

