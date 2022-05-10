#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableStoryResident.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableStoryResident : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndex;
    
    UPROPERTY(EditAnywhere)
    uint8 StoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BranchStoryID;
    
    UPROPERTY(EditAnywhere)
    uint8 CompleteStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StoryProgressFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StoryOpenFlagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestOrderEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FractionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleUnkownFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ViewIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImageName;
    
    UPROPERTY(EditAnywhere)
    uint8 AdditionalGroupViewOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ViewLocationID_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> IconOperationStatus_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> CircleRadius_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ViewTargetDistance_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ViewTargetDistanceParam_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> IconVisibleStartDistance_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> IconKind_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> IconTargetType_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetObjectID_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IconInvisibleFlag_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<float> IconLineLength_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IconSocketName_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> QuestClearStep_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InvNaviIcon_ViewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InvNaviIcon_ViewLocationID;
    
    UPROPERTY(EditAnywhere)
    uint8 InvNaviIcon_ViewFlagIconOperationStatus;
    
    UPROPERTY(EditAnywhere)
    float InvNaviIcon_IconVisibleStartDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 InvNaviIcon_IconKind;
    
    UPROPERTY(EditAnywhere)
    uint8 InvNaviIcon_IconTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InvNaviIcon_TargetObjectID;
    
    UPROPERTY(EditAnywhere)
    float InvNaviIcon_IconLineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterID;
    
    UPROPERTY(EditAnywhere)
    uint8 FractionView;
    
    UPROPERTY(EditAnywhere)
    uint8 ScenarioType;
    
    FEndDataTableStoryResident();
};

