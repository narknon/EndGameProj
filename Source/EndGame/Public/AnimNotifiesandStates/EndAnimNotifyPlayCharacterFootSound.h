#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ESQEXSEADAutoSeMotionSoundType.h"
#include "SQEXSEADSoundKey.h"
#include "EndAnimNotifyPlayCharacterFootSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENDGAME_API UEndAnimNotifyPlayCharacterFootSound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADAutoSeMotionSoundType::Type> AutoSeMotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDirectAssign: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADSoundKey DirectAssignedSoundEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPointName;
    
    UPROPERTY(EditAnywhere)
    float SwitchValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZeroOneSlotIndex;
    
    UPROPERTY(EditAnywhere)
    float ZeroOneValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayOnlyCharecterLanded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSyncOwnerHiddenState: 1;
    
    UEndAnimNotifyPlayCharacterFootSound();
};

