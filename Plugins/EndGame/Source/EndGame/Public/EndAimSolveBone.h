#pragma once
#include "CoreMinimal.h"
#include "EndAimSolveBone.generated.h"

USTRUCT(BlueprintType)
struct FEndAimSolveBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    float UpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreBoneUpRate;
    
    UPROPERTY(EditAnywhere)
    float TranslationRate;
    
    ENDGAME_API FEndAimSolveBone();
};

