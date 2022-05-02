#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableLocationResident.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableLocationResident : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 SaveLocationSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExistGroundCreateActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnuseRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HiddenFieldTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IsPlusLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugReserveCharaPopMemory;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODLightEnableDrawDist;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODLightInCameraTickDist;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODLightOutCameraTickDist;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODLightShouldTickDist;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODMiddleEnableDrawDist;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODMiddleInCameraTickDist;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODMiddleOutCameraTickDist;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODMiddleShouldTickDist;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODLightEnableDrawDistNEO;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODLightInCameraTickDistNEO;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODLightOutCameraTickDistNEO;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODLightShouldTickDistNEO;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODMiddleEnableDrawDistNEO;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODMiddleInCameraTickDistNEO;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODMiddleOutCameraTickDistNEO;
    
    UPROPERTY(EditAnywhere)
    float CharaPopLODMiddleShouldTickDistNEO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharaPopMemOverrideEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaPopMemOverrideAssetName0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaPopMemOverrideAssetName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaPopMemOverrideAssetName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharaPopMemOverrideAssetName3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharaPopMemOverrideValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TruthLocationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TruthLocationLayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocationName;
    
    UPROPERTY(EditAnywhere)
    uint8 FinishTurorial;
    
    UPROPERTY(EditAnywhere)
    uint8 HideLocationGUI;
    
    UPROPERTY(EditAnywhere)
    uint8 TreasureSpecIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<float> PlayerInfo_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EntryObject_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LocationInStateTrigger_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ResidentPlannerLevelSet_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreCollisionAttributeStoryFlagName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreCollisionAttributeActorName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreFootAttributeActorName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SlotDetailList_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SlotPresetList_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DebugBeginingStoryFlag_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DebugStoryFlag_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DebugDisabeStoryFlag_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> LocationJumpTransform_Array;
    
    FEndDataTableLocationResident();
};

