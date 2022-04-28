// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESQEXSEAD_BGMStopBehaviour.h"
#include "ESQEXSEAD_BGMStoreBehaviour.h"
#include "ESQEXSEADANPlayAutoSeSourceType.h"
#include "ESQEXSEADAudioStartTimings.h"
#include "ESQEXSEADAudioVolumeCommand.h"
#include "ESQEXSEADAutoSeComponentAssetTableNonSurface.h"
#include "ESQEXSEADAutoSeComponentAssetTablePerSurface.h"
#include "ESQEXSEADAutoSeMotionSoundType.h"
#include "ESQEXSEADAutoSePartsType.h"
#include "ESQEXSEADAutoSeResult.h"
#include "ESQEXSEADCategoryVolumeLayers.h"
#include "ESQEXSEADChangeAutoSeEnableNotifyEndBehavior.h"
#include "ESQEXSEADLayoutType.h"
#include "ESQEXSEADSoundState.h"
#include "ESQEXSEADZeroOneProperties.h"
#include "Engine/EngineTypes.h"
#include "SQEXSEAD_StructsAndEnums.generated.h"


//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------


UENUM(BlueprintType)
enum ESQEXSEAD_BGMLoadState
{
	ESQEXSEAD_BGMLoadState_Invalid = 0,
	ESQEXSEAD_BGMLoadState_NotLoaded = 1,
	ESQEXSEAD_BGMLoadState_Loading = 2,
	ESQEXSEAD_BGMLoadState_Valid = 3,
	ESQEXSEAD_BGMLoadState_MAX = 4 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADBGMControlTypes
{
	ESQEXSEADBGMControlTypes_NONE = 0,
	ESQEXSEADBGMControlTypes_PLAY = 1,
	ESQEXSEADBGMControlTypes_STOP = 2,
	ESQEXSEADBGMControlTypes_RESET = 3,
	ESQEXSEADBGMControlTypes_SETSILENT = 4,
	ESQEXSEADBGMControlTypes_SETSECTION = 5,
	ESQEXSEADBGMControlTypes_SETMODE = 6,
	ESQEXSEADBGMControlTypes_SETPATHPLAY = 7,
	ESQEXSEADBGMControlTypes_READY = 8,
	ESQEXSEADBGMControlTypes_MAX = 9 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADLayoutObstructionType
{
	ESQEXSEADLayoutObstructionType_Board = 0,
	ESQEXSEADLayoutObstructionType_Box = 1,
	ESQEXSEADLayoutObstructionType_MAX = 2 UMETA(Hidden)
};

UENUM(BlueprintType)
enum ESQEXSEADSoundOutputPort
{
	ESQEXSEADSoundOutputPort_AUTO = 0,
	ESQEXSEADSoundOutputPort_MAIN = 1,
	ESQEXSEADSoundOutputPort_RESTRICTED = 2,
	ESQEXSEADSoundOutputPort_PAD1 = 3,
	ESQEXSEADSoundOutputPort_MAIN_PAD1 = 4,
	ESQEXSEADSoundOutputPort_MAX = 5 UMETA(Hidden)
};


//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

USTRUCT(BlueprintType)
// ScriptStruct SQEXSEAD.SQEXSEADSoundKey
// 0x0038
struct FSQEXSEADSoundKey
{
		GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundKey")
	TSoftObjectPtr<class USQEXSEADSound>               SoundRef;                                                 // 0x0000(0x0028) (Edit, BlueprintVisible)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundKey")
	int                                                SoundIndex;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundKey")
	FName                                       SoundName;                                                // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

};

USTRUCT(BlueprintType)
struct FSQEXSEADBGMControlTrackKey
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADBGMControlTrackKey")
	float Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADBGMControlTrackKey")
	TEnumAsByte<ESQEXSEADBGMControlTypes> ControlType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADBGMControlTrackKey")
	FName SlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADBGMControlTrackKey")
	int SectionIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADBGMControlTrackKey")
	int ModeIndex;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAnimNotifyPlayAutoSeParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	TEnumAsByte<ESQEXSEADANPlayAutoSeSourceType::Type> SourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	TEnumAsByte<ESQEXSEADAutoSeMotionSoundType::Type> MotionSoundType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	class USQEXSEADSurfaceAssetReferenceTable* SurfaceAssetPathTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	FName SurfaceAssetTableRecordName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	TEnumAsByte<ESQEXSEADAutoSePartsType::Type> AutoSePartsType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	int AutoSePartsIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	bool bCheckIsGrounded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	bool bAttachToParts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	float SoundVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	float SoundPitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAnimNotifyPlayAutoSeParams")
	bool bFollowOwnerVisible;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeAssetLoaderAssets
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAssetLoaderAssets")
	TArray<USoundBase*> Assets;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentAssetTablePerSurface
{
	GENERATED_BODY()
	UPROPERTY()
	FSoftObjectPath SoundAssetPaths;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentAssetTableNonSurface
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FSoftObjectPath SoundAssetPaths;
};

USTRUCT(BlueprintType)
struct FSQEXSEADSurfaceAssetReferenceRecord
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSurfaceAssetReferenceRecord")
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSurfaceAssetReferenceRecord")
	FSoftObjectPath AssetRefs;
};

USTRUCT(BlueprintType)
struct FSQEXSEADSurfaceAssetReferenceTableData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSurfaceAssetReferenceTableData")
	TArray<FSQEXSEADSurfaceAssetReferenceRecord> Records;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentFootInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentFootInitParams")
	FName FemurName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentFootInitParams")
	FName TibiaName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentFootInitParams")
	FName FootName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentFootInitParams")
	FName HeelName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentFootInitParams")
	FName ToeName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentArmInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentArmInitParams")
	FName ShoulderName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentArmInitParams")
	FName ElbowName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentWingInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentWingInitParams")
	FName WingRootName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentWingInitParams")
	FName WingEdgeName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentSwingInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentSwingInitParams")
	TArray<FName> ChainNodeNames;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentBodyInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentBodyInitParams")
	FName BaseName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentBodyInitParams")
	FName WaistName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeComponentInitParams
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	TArray<struct FSQEXSEADAutoSeComponentFootInitParams> Feet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	TArray<struct FSQEXSEADAutoSeComponentArmInitParams> Arms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	TArray<struct FSQEXSEADAutoSeComponentWingInitParams> Wings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	TArray<struct FSQEXSEADAutoSeComponentSwingInitParams> Swings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	struct FSQEXSEADAutoSeComponentBodyInitParams Body;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeComponentInitParams")
	float AutoCalcHeelRatio;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeAnalyzerSetting
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	bool bOverrideAssumeFootMotionlessMoveLenInWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	float AssumeFootMotionlessMoveLenInWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	bool bOverrideAssumeBodyRunngingVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	float AssumeBodyRunngingVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	bool bOverrideAutoCalcFootGroundedThresholdRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeAnalyzerSetting")
	float AutoCalcFootGroundedThresholdRatio;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeDetectorSettingFootStep
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingFootStep")
	bool bOverrideFootShuffleAssumeBodyStopVelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingFootStep")
	float FootShuffleAssumeBodyStopVelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingFootStep")
	bool bOverrideFootShuffleDetectFootAccelThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingFootStep")
	float FootShuffleDetectFootAccelThreshold;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeDetectorSettingRustle
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	bool bOverrideElbowRustleVolumeRangesWalk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleVolumeRangeWalkMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleVolumeRangeWalkMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	bool bOverrideElbowRustleVolumeRangesRun;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleRelativeVelocityForNmlVolumeRangeRunMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleRelativeVelocityForNmlVolumeRangeRunMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleVolumeRangeRunMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingRustle")
	float ElbowRustleVolumeRangeRunMax;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeDetectorSettingSwing
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingSwing")
	bool bOverrideKnockDetectVelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingSwing")
	float KnockDetectVelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingSwing")
	bool bOverrideRubDetectVelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingSwing")
	float RubDetectVelocityThreshold;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeDetectorSettingWingAction
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettingWingAction") 
	bool                                               bOverrideFlapUpDownParameters;                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettingWingAction") 
	float                                              FlapUpVolumeRangeMin;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettingWingAction") 
	float                                              FlapUpVolumeRangeMax;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettingWingAction") 
	float                                              FlapDownVolumeRangeMin;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettingWingAction") 
	float                                              FlapDownVolumeRangeMax;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeDetectorSettingMisc
{
	GENERATED_BODY()
public:
	bool                                               bEnableTurnDetection;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	bool                                               bOverrideTurnSettings;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              TurnRotVelocityRateThreshold;                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              TurnVolumeMinRotVelRate;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              TurnVolumeMaxRotVelRate;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	bool                                               bEnableHeadRotDetection;                                  // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	bool                                               bOverrideHeadRotSettings;                                 // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              HeadRotRVelThreshold;                                     // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              HeadRotVolumeMinRVel;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              HeadRotVolumeMaxRVel;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	bool                                               bEnableBowDetection;                                      // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	bool                                               bOverrideBowSettings;                                     // 0x0021(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              AssumeWaistLessMoveVelocity;                              // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              ShoulderRVelThreshold;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	bool                                               bUseShouldersRVelAverage;                                 // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              BowVolumeMinRVel;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              BowVolumeMaxRVel;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	bool                                               bEnableRagdollDetection;                                  // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	bool                                               bOverrideRagdollSettings;                                 // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              RagdollBounceEnoughVel;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              RagdollBounceVolumeMinVel;                                // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              RagdollBounceVolumeMaxVel;                                // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              RagdollFricativeVelThreshold;                             // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              RagdollFricativeVolumeMinVel;                             // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeDetectorSettingMisc") 
	float                                              RagdollFricativeVolumeMaxVel;                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSePostDetectionSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSePostDetectionSettings") 
	float                                              VolumeScale;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeDetectorSettings
{
	GENERATED_BODY()
public:
 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettings") 
	struct FSQEXSEADAutoSeAnalyzerSetting              AnalyzerSetting;                                          // 0x0000(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettings") 
	struct FSQEXSEADAutoSeDetectorSettingFootStep      DetectorSettingFootStep;                                  // 0x001C(0x007C) (Edit, BlueprintVisible, BlueprintReadOnly)
 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettings") 
	struct FSQEXSEADAutoSeDetectorSettingRustle        DetectorSettingRustle;                                    // 0x0098(0x0064) (Edit, BlueprintVisible, BlueprintReadOnly)
 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettings") 
	struct FSQEXSEADAutoSeDetectorSettingWingAction    DetectorSettingWingAction;                                // 0x00FC(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettings") 
	struct FSQEXSEADAutoSeDetectorSettingSwing         DetectorSettingSwing;                                     // 0x0110(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettings") 
	struct FSQEXSEADAutoSeDetectorSettingMisc          DetectorSettingMisc;                                      // 0x0130(0x0054) (Edit, BlueprintVisible, BlueprintReadOnly)
 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FSQEXSEADAutoSeDetectorSettings") 
	struct FSQEXSEADAutoSePostDetectionSettings        PostDetectionSettings;                                    // 0x0184(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly)
};

USTRUCT(BlueprintType)
struct FSQEXSEAD_BGMOptions
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	int Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	ESQEXSEAD_BGMStoreBehaviour StoreBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	ESQEXSEAD_BGMStopBehaviour StopBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	float PlayFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	float ResumeFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	float SuspendFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	float StopFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	float StaySuspendTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	bool bUnreferenceAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMOptions")
	bool bRestoreAfterFinish;
};

USTRUCT(BlueprintType)
struct FSQEXSEAD_BGMSlotSetting
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMSlotSetting")
	FName SlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEAD_BGMSlotSetting")
	struct FSQEXSEAD_BGMOptions SlotOption;
};

USTRUCT(BlueprintType)
struct FSQEXSEAD_Timing
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FSQEXSEADSoundIndexInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundIndexInfo")
	int                                                SoundIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundIndexInfo")
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

USTRUCT(BlueprintType)
struct FSQEXSEADSoundRandomProperty
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundRandomProperty")
	FName                                       SoundName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundRandomProperty")
	int                                                RandomWeights;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

USTRUCT(BlueprintType)
struct FSQEXSEADRandomSoundSetting
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADRandomSoundSetting")
	TArray<FSQEXSEADSoundRandomProperty>        RandomProperties;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADRandomSoundSetting")
	int                                                SilentRatio;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADRandomSoundSetting")
	uint8                                      bIgnorePreviousSelectedSound : 1;                         // 0x0014(0x0001) (Edit, BlueprintVisible)
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeControlTrackKey
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	float Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseGlobalEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bGlobalEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseVolumeScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	float VolumeScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseDisableAnimNotifyPlayAutoSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bDisableAnimNotifyPlayAutoSE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseEnableForceOverridePhysicalSurface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bEnableForceOverridePhysicalSurface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	TEnumAsByte<EPhysicalSurface> PhysicalSurfaceForForceOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	bool bUseAssumeFootMotionlessMoveLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeControlTrackKey")
	float AssumeFootMotionlessMoveLength;
};

USTRUCT(BlueprintType)
struct FSQEXSEADEventTrackKey
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADEventTrackKey")
	float Time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADEventTrackKey")
	FName EventName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADLayoutInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	TEnumAsByte<ESQEXSEADLayoutType::Type> LayoutType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	float InnerRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	float OuterRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	float OcclusionLPF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	float OcclusionVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutInfo")
	TArray<FVector> LayoutPointLocations;
};

USTRUCT(BlueprintType)
struct FSQEXSEADLayoutObstructionInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutObstructionInfo")
	TEnumAsByte<ESQEXSEADLayoutObstructionType> ObstructionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutObstructionInfo")
	TArray<FVector> ObstructionPointLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADLayoutObstructionInfo")
	TArray<class AStaticMeshActor*> LinkedMeshActorList;
};

USTRUCT(BlueprintType)
struct FSQEXSEADSoundReference
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundReference")
	class USoundBase* Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundReference")
	bool bFollow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADSoundReference")
	FName AttachPointName;
};

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeMotionSoundFilter
{
	GENERATED_BODY()
public:
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_FootStep : 1;                               // 0x0000(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_FootShuffle : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_Jump : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_Land : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_RustleArm : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_RustleHandWave : 1;                         // 0x0000(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_RustleFoot : 1;                             // 0x0000(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_RustleFootCrotch : 1;                       // 0x0000(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_RustleFootBend : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_WingFlap : 1;                               // 0x0001(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_Turn : 1;                                   // 0x0001(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_Bow : 1;                                    // 0x0001(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_HeadRot : 1;                                // 0x0001(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_SwingKnock : 1;                             // 0x0001(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_SwingRub : 1;                               // 0x0001(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_RagdollBounce : 1;                          // 0x0001(0x0001) (Edit, BlueprintVisible)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAutoSeMotionSoundFilter") 
	uint8                                      bMSFilterFlag_RagdollFricative : 1;                       // 0x0002(0x0001) (Edit, BlueprintVisible)
};

USTRUCT(BlueprintType)
struct FSQEXSEADVolumeInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FSQEXSEADAudioVolumeEvent
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAudioVolumeEvent")
	TEnumAsByte<ESQEXSEADAudioVolumeCommand::Type>           Command;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAudioVolumeEvent") 
	float                                              ExteriorAudioVolumeSoundOcclusionVolume;                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAudioVolumeEvent") 
	float                                              ExteriorAudioVolumeSoundOcclusionLPF;                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAudioVolumeEvent") 
	float                                              ObstructionVolume;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAudioVolumeEvent") 
	float                                              ObstructionLPF;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FSQEXSEADAudioVolumeEvent") 
	float                                              FadeTime;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
struct FSQEXSEADSoundAttachedInfo
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FSQEXSEAD_BGMLocalOptions
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FSQEXSEADSystemPerformanceInfo
{
	GENERATED_BODY()
};





//CUSTOM MAB/SAB STUFF
static uint8 BytesToUint8(const uint8* Data, int& Buffer)
{
	uint8 value = 0;
	value |= Data[Buffer];
	Buffer++;
	return value;
}
static uint16 BytesToUint16(const uint8* Data, int& Buffer, bool bIsBigEndian)
{
	uint32 value = 0;
	if (bIsBigEndian)
	{
		value |= Data[Buffer + 1];
		value |= Data[Buffer] << 8;
	}
	else
	{
		value |= Data[Buffer + 1] << 8;
		value |= Data[Buffer];
	}
	Buffer += 2;
	return value;
}
static uint32 BytesToUint32(const uint8* Data, int& Buffer, bool bIsBigEndian)
{
	uint32 value = 0;
	if (bIsBigEndian)
	{
		value |= Data[Buffer + 3];
		value |= Data[Buffer + 2] << 8;
		value |= Data[Buffer + 1] << 16;
		value |= Data[Buffer] << 24;
	}
	else
	{
		value |= Data[Buffer + 3] << 24;
		value |= Data[Buffer + 2] << 16;
		value |= Data[Buffer + 1] << 8;
		value |= Data[Buffer];
	}
	Buffer += 4;
	return value;
}
static FString Uint8ToString(uint8 Input)
{
	uint8 Byte1 = Input;
	FString CombinedString = BytesToString(&Byte1, 1);
	CombinedString[0] = CombinedString[0] - 1;
	return CombinedString;
}
static FString Uint16ToString(uint16 Input)
{
	uint8 Byte1 = Input;
	uint8 Byte2 = Input >> 8;
	FString CombinedString = BytesToString(&Byte1, 1) += BytesToString(&Byte2, 1);
	CombinedString[0] = CombinedString[0] - 1;
	CombinedString[1] = CombinedString[1] - 1;
	return CombinedString;
}
static FString Uint32ToString(uint32 Input)
{
	uint8 Byte1 = Input;
	uint8 Byte2 = Input >> 8;
	uint8 Byte3 = Input >> 16;
	uint8 Byte4 = Input >> 24;
	FString CombinedString = BytesToString(&Byte1, 1) += BytesToString(&Byte2, 1) += BytesToString(&Byte3, 1) += BytesToString(&Byte4, 1);
	for (int i = 0; i < CombinedString.Len(); i++) { CombinedString[i] = CombinedString[i] - 1; }
	return CombinedString;
}
static FString ListOfBytesToString(const uint8* Input, int Count)
{
	FString NewString = BytesToString(Input, Count);
	for (int i = 0; i < NewString.Len(); i++) { NewString[i] = NewString[i] - 1; }
	return NewString;
}
static TArray<uint8> ReadBytes(const uint8* Input, int Index, int Count)
{
	TArray<uint8> ReturnedData;
	while (Index < Count)
	{
		ReturnedData.Add(BytesToUint8(Input, Index));
		Index++;
	}
	return ReturnedData;
}

struct FSabMabHeaderSection
{
	FString SectionName;
	uint16 UnknownAt4;
	uint16 UnknownAt6;
	uint32 OffsetInInnerFile;
	uint32 UnknownAtC;
};
struct FMaterialUser
{
	FString User;
	int MaterialIndex;
};
struct FMaterialEntry
{
	int EntryIndex;
	int StreamPosition;
	int MaterialHeaderSize;
	int HeaderPosition;
	uint16 MtrlNumber;
	int ExtraDataOffset;
	int PositionOfOffsetFromMtrlSectionOffset;
	uint32 StreamSize;
	int HcaHeaderSize;
	int HcaStreamStartPosition;
	int HcaStreamSize;
	int NoHcaHeaderSize;
	int TrackEndPosition;
	int NoHcaHeaderExtraDataSize;
	uint32 LocalSectionOffset;
	uint32 LoopStart;
	uint32 LoopEnd;
	uint32 ExtraDataSize;
	uint32 SampleRate;
	uint8 ChannelCount;
	uint8 Codec;
	uint16 ExtraDataId;
	bool IsLooping = LoopEnd > 0;

	uint8 HCAFMTChannelCount;
	int HCAFMTSampleRate;
	uint32 HCAFMTFrameCount;
	uint16 HCAFMTInsertedSamples;
	uint16 HCAFMTAppendedSamples;
	int HCAFMTSampleCount;

	uint16 HCACOMPFrameSize;
	uint8 HCACOMPMinResolution;
	uint8 HCACOMPMaxResolution;
	uint8 HCACOMPTrackCount;
	uint8 HCACOMPChannelConfig;
	uint8 HCACOMPTotalBandCount;
	uint8 HCACOMPBaseBandCount;
	uint8 HCACOMPStereoBandCount;
	uint8 HCACOMPBandsPerHfrGroup;

	uint16 HCACIPHEncryptionType;
};

struct FMusicLayer
{
	int Index;
	int Offset;
	uint8 Version;
	uint8 Flags;
	uint16 Size;
	uint16 MaterialIndex;
	uint16 LoopCount;
	uint32 UnknownAt8;
	uint32 EndPointSample;
};

struct FMusicSlice
{
	int Index;
	uint8 Version;
	uint16 Size;
	int SubTableOffset;
	int Offset;
	FString Name;
	uint16 CustomPointsCount;
	uint32 EntryPointsSample;
	uint32 ExitPointsSample;
	uint32 LoopStart;
	uint32 LoopEnd;
	uint32 MeterCount;
	int NameOffset;
	int NameSize;

	TArray<FMusicLayer> Layers;
};
struct FMusicMode
{
	int Offset;
	uint8 Version;
	uint16 Size;
	int NameOffset;
	uint8 NameSize;
	FString Name;
};