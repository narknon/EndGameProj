#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableEffectCharaProperty.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableEffectCharaProperty : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 EffectResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EffectResourceName;
    
    UPROPERTY(EditAnywhere)
    uint8 SoundResourceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundResourceName;
    
    FEndDataTableEffectCharaProperty();
};

