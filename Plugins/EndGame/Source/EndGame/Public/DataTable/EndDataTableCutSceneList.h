#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCutSceneList.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCutSceneList : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugEnvironmentSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugLocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastCutOnFirstSequence;
    
    UPROPERTY(EditAnywhere)
    float OverrideEnableDrawDistance;
    
    UPROPERTY(EditAnywhere)
    float OverrideInCameraTickDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 StartCameraBlend;
    
    UPROPERTY(EditAnywhere)
    float StartCameraBlendStartRate;
    
    UPROPERTY(EditAnywhere)
    float StartCameraBlendEndRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartCameraBlendType;
    
    UPROPERTY(EditAnywhere)
    float StartAimBlendStartRate;
    
    UPROPERTY(EditAnywhere)
    float StartAimBlendEndRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartAimBlendType;
    
    UPROPERTY(EditAnywhere)
    float StartFOVBlendStartRate;
    
    UPROPERTY(EditAnywhere)
    float StartFOVBlendEndRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartFovBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartCameraBlendTime;
    
    UPROPERTY(EditAnywhere)
    uint8 EndCameraBlend;
    
    UPROPERTY(EditAnywhere)
    float EndCameraBlendStartRate;
    
    UPROPERTY(EditAnywhere)
    float EndCameraBlendEndRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndCameraBlendType;
    
    UPROPERTY(EditAnywhere)
    float EndAimBlendStartRate;
    
    UPROPERTY(EditAnywhere)
    float EndAimBlendEndRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndAimBlendType;
    
    UPROPERTY(EditAnywhere)
    float EndFOVBlendStartRate;
    
    UPROPERTY(EditAnywhere)
    float EndFOVBlendEndRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndFovBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> NextCutSceneNameList_Array;
    
    UPROPERTY(EditAnywhere)
    uint8 LevelTimingReadyCutScene;
    
    UPROPERTY(EditAnywhere)
    float EmgCameraPositionX;
    
    UPROPERTY(EditAnywhere)
    float EmgCameraPositionY;
    
    UPROPERTY(EditAnywhere)
    float EmgCameraPositionZ;
    
    UPROPERTY(EditAnywhere)
    float EmgCameraAimPositionX;
    
    UPROPERTY(EditAnywhere)
    float EmgCameraAimPositionY;
    
    UPROPERTY(EditAnywhere)
    float EmgCameraAimPositionZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InMotionBlendFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopCharaLimitOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MovieMaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoviePastedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WhereMovieActorOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DebugExtraSubLevelList_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaCharaSpecName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaAttachActorName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaAttachSocketName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaCharaSpecName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaAttachActorName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaAttachSocketName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaCharaSpecName3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaAttachActorName3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaAttachSocketName3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaCharaSpecName4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaAttachActorName4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaAttachSocketName4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaCharaSpecName5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaAttachActorName5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugFaAttachSocketName5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtraFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseMovieMaterialName_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseMovieMaterialName_US;
    
    FEndDataTableCutSceneList();
};

