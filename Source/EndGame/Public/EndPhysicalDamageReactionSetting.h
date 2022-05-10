#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalDamageReactionBoneSetting.h"
#include "EndPhysicalDamageReactionSetting.generated.h"

class UEndPhysicalConstraintSetting;

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicalDamageReactionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndPhysicalConstraintSetting* ConstraintSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalDamageReactionBoneSetting> BoneSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndPhysicalDamageReactionBoneSetting> ExtendBoneSettings;
    
    UPROPERTY(EditAnywhere)
    float ActiveTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitDirection2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOnExtraAction;
    
    FEndPhysicalDamageReactionSetting();
};

