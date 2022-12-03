#pragma once
#include "CoreMinimal.h"
#include "HSFLipSyncInput.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_HSFLipSync.generated.h"

class UHSFLipMap;

USTRUCT(BlueprintType)
struct HSFLIPSYNCRUNTIME_API FAnimNode_HSFLipSync : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UHSFLipMap*> LipMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHSFLipSyncInput Input;
    
    FAnimNode_HSFLipSync();
};

