#pragma once
#include "CoreMinimal.h"
#include "EndPhysicsSeSetting.h"
#include "EndBreakBoxMiniGameBoxPhysicsSe.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBreakBoxMiniGameBoxPhysicsSe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AssetUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndPhysicsSeSetting SeSetting;
    
    FEndBreakBoxMiniGameBoxPhysicsSe();
};

