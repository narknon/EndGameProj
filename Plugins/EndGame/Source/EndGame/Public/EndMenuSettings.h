#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "EndMenuStructs.h"
#include "EndMenuSettings.generated.h"

UCLASS(Config=DefaultEndMenu)
class ENDGAME_API UEndMenuSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FEndMenuColorMapping> ColorMappings;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FEndMenuImageMapping> IconMappings;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FEndMenuImageMapping> ButtonMappings;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FEndMenuImageMapping> MemberJoinMappings;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FEndMenuImageMapping> CommandMenuMemberMappings;
    
    UPROPERTY(Config, EditAnywhere)
    float MenuBattleAngleY;
    
    UPROPERTY(Config, EditAnywhere)
    float SubtitleWaitTime;
    
    UPROPERTY(Config, EditAnywhere)
    float PlayTimeSleepTime;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath SubtitleWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath FieldTargetWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleTargetWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleEnemyStatusWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath FieldMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath PauseMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CountdownWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath NaviMapWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CharacterJoinWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CharacterReJoinWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath GameOverWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath SaveDataAccessWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath TalkLogsWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MessageLogsWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath EventProgressWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath TalkSelectCenterWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath LocationNameWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath LoadingIconWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath LocationLoadingWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleEnemyOutsideWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleTextWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MessageWindowWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath FontTemplateWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ChapterNameWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath NaviMapIconWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuTopWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuItemWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuItemListWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuEquipWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleEscape;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleParryEffectWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleTutorialWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath GBikeStatusWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MapJournalWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleLockonMarker;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleDamageSubTextWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuBattleSettingWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath LevelUpTextWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath AreaMapWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MidgarMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath StoryMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath AreaMapCursorWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath AreaMapPlayerIconWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath AreaMapTargetIconWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath AreaMapButtonWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath NaviMapFootprintWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ShopWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuSystemWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuWeaponUpgradeMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuWeaponUpgradeWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleSkillFrameWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath EnemySkillFrameWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleTargetNewWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuSaveLoadWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath AtbEffectWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath AttackSigneWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BurstStartWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath GBikeEnemyStatusWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath PartyCommandRequestWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleTipsWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath FieldQuestIconWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CompassWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath EnemyDetailWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuStatusWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuItemSelectMemberWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath KeyGuideWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ColosseumMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ColosseumResultMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ColosseumConfirmWindow;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CommandMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuMagicWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath QuestMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath QuestDetailWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CinemaButtonWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath QuestCompleteMessageWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath Mako5MonitorsWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleReportWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath JukeboxMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath StatusSummonIconWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ReverseDrainIconWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath EnemyReportWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath SummonGaugeIcontWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath SummonChantGaugeIcontWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleLockonMarker00Widget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleLockonMarker01Widget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleLockonMarker02Widget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath SoundTitleWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BillboardThrobberWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath FieldTargetSearchWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath FieldTargetSearchIconWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath FieldTarget01Widget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ChocoboFastTravelMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath KeyGuideHelpWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath Slum7BoardWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuManualWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath QuickMateriaMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath Undg6MeterWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath StatusBuildingFloor;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath TurnBackAlertWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ClearVRCountWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuDlcWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath BattleTextNumberWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath SkippingIconWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath VRMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath VRResultMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath VRConfirmWindow;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ReturnFastTravelIcontWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ColosseumBattleTelop;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath VRBattleTelop;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuTutorialWindowWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath MainMenuTutorialFrameWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath ThrobberWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath WeakTargetWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CondorFortPreapreWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CondorFortTopWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath StatusCooperationWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath StatusIconAffinityWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CondorFortRoleIconWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CondorFortEditWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath VRplus_MenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath VRplus_ResultMenuWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath VRplus_ConfirmWindow;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CondorFortStatusWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CameraModeWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath SkillFrameEffectWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath CondorFortTimerWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath FieldTargetBlockWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath DlcWindowWidget;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftClassPath YuffieBoxGameResultWidget;
    
    UEndMenuSettings();
};

