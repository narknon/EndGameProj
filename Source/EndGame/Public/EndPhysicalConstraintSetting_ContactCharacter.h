#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalConstraintSetting_ContactCharacter.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicalConstraintSetting_ContactCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneContactBoneName;
    
    UPROPERTY(EditAnywhere)
    float BoneContactRadius0;
    
    FEndPhysicalConstraintSetting_ContactCharacter();
};

