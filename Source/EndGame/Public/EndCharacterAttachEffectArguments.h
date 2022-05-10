#pragma once
#include "CoreMinimal.h"
#include "EEndCharacterAttachEffectResourceCategoryType.h"
#include "EndCharacterAttachEffectArguments.generated.h"

class AEndCharacter;

USTRUCT(BlueprintType)
struct FEndCharacterAttachEffectArguments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndCharacterAttachEffectResourceCategoryType ResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* ResourceChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResourceLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOnEscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetachOnRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEndCharacter* BeamTargetChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamTargetCharaAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeamTargetDisableContactTargetChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeamTargetContactEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeamTargetContactWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeamTargetContactOwnerChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLineEffect;
    
    UPROPERTY(EditAnywhere)
    float LineEffectTangentLength;
    
    UPROPERTY(EditAnywhere)
    float CreateSecondMin;
    
    UPROPERTY(EditAnywhere)
    float CreateSecondMax;
    
    UPROPERTY(EditAnywhere)
    float LoopOffSecondMin;
    
    UPROPERTY(EditAnywhere)
    float LoopOffSecondMax;
    
    UPROPERTY(EditAnywhere)
    float ReCreateSecondMin;
    
    UPROPERTY(EditAnywhere)
    float ReCreateSecondMax;
    
    ENDGAME_API FEndCharacterAttachEffectArguments();
};

