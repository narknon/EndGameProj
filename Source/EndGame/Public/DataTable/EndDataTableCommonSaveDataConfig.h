#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCommonSaveDataConfig.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCommonSaveDataConfig : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 DifficultyType;
    
    UPROPERTY(EditAnywhere)
    uint8 WaitMode;
    
    UPROPERTY(EditAnywhere)
    uint8 LearnMenuCursor;
    
    UPROPERTY(EditAnywhere)
    uint8 LearnBattleCursor;
    
    UPROPERTY(EditAnywhere)
    uint8 NaviMapAutoRotate;
    
    UPROPERTY(EditAnywhere)
    uint8 ViewTutorial;
    
    UPROPERTY(EditAnywhere)
    uint8 ViewSubtitle;
    
    UPROPERTY(EditAnywhere)
    uint8 AutoTalk;
    
    UPROPERTY(EditAnywhere)
    uint8 FontSize;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetLockChangeMethodType;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraSideRotType;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraVerticalRotType;
    
    UPROPERTY(EditAnywhere)
    uint8 ControllerVibration;
    
    UPROPERTY(EditAnywhere)
    uint8 SpeakerOutputType;
    
    UPROPERTY(EditAnywhere)
    uint8 BgmVolume;
    
    UPROPERTY(EditAnywhere)
    uint8 SeVolume;
    
    UPROPERTY(EditAnywhere)
    uint8 VoiceVolume;
    
    UPROPERTY(EditAnywhere)
    uint8 BrightnessSetting;
    
    UPROPERTY(EditAnywhere)
    uint8 TextLanguage;
    
    UPROPERTY(EditAnywhere)
    uint8 VoiceLanguage;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraLeapTime;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraLengthField;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraLengthBattle;
    
    UPROPERTY(EditAnywhere)
    uint8 ChangeKeyAssignForTargetLock;
    
    UPROPERTY(EditAnywhere)
    uint8 AutoUnlockForTargetLock;
    
    UPROPERTY(EditAnywhere)
    uint8 LockOnType;
    
    UPROPERTY(EditAnywhere)
    uint8 SequenceNormalAttackTargetChange;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraMoveFollow;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraSlopeFollow;
    
    UPROPERTY(EditAnywhere)
    uint8 TargetLockChangeOperationType;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraSpaceOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 ScreenVibration;
    
    UPROPERTY(EditAnywhere)
    uint8 CameraAttackFollow;
    
    UPROPERTY(EditAnywhere)
    uint8 FriendCommandCameraType;
    
    UPROPERTY(EditAnywhere)
    uint8 AutoPlayMode;
    
    UPROPERTY(EditAnywhere)
    uint8 ShowBattleGuide;
    
    UPROPERTY(EditAnywhere)
    uint8 BattleButtonChange;
    
    FEndDataTableCommonSaveDataConfig();
};

