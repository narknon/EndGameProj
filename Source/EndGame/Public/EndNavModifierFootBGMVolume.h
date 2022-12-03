#pragma once
#include "CoreMinimal.h"
#include "EndNavModifierVolumeBase.h"
#include "EndNavModifierFootBGMVolume.generated.h"

UCLASS(Blueprintable)
class AEndNavModifierFootBGMVolume : public AEndNavModifierVolumeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _footBGMSetID;
    
    AEndNavModifierFootBGMVolume();
};

