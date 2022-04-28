#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=ESQEXSEADAutoSeMotionSoundType -FallbackName=ESQEXSEADAutoSeMotionSoundType
//CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEADSoundKey -FallbackName=SQEXSEADSoundKey
#include "EndAnimNotifyPlayCharacterFootSound.generated.h"

UCLASS(CollapseCategories)
class ENDGAME_API UEndAnimNotifyPlayCharacterFootSound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESQEXSEADAutoSeMotionSoundType::Type> AutoSeMotionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bDirectAssign: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSQEXSEADSoundKey DirectAssignedSoundEntry;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SwitchValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ZeroOneSlotIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZeroOneValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bPlayOnlyCharecterLanded: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bSyncOwnerHiddenState: 1;
    
    UEndAnimNotifyPlayCharacterFootSound();
};

