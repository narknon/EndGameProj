#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndAdjustOrientationBoneSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndAdjustOrientationBoneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AdjustRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AdjustLimit;
    
    UPROPERTY(EditAnywhere)
    float AdjustSpeed;
    
    FEndAdjustOrientationBoneSetting();
};

