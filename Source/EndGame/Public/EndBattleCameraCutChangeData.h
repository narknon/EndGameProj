#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "EEndBattleCameraChangeTimingType.h"
#include "EEndBattleCameraBlendBasePosType.h"
#include "EEndBattleCameraCutEndType.h"
#include "EndBattleCameraCutChangeData.generated.h"

USTRUCT(BlueprintType)
struct FEndBattleCameraCutChangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBattleCameraChangeTimingType TimingType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEndBattleCameraCutEndType::Type> CutEndType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BeginBlend;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend EndBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBattleCameraBlendBasePosType BeginBlendBasePosType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBattleCameraBlendBasePosType EndBlendBasePosType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TimingTypeParamName;
    
    ENDGAME_API FEndBattleCameraCutChangeData();
};

