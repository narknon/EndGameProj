#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableInDoorVolume.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableInDoorVolume : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashRootMotionTranslationScale;
    
    FEndDataTableInDoorVolume();
};

