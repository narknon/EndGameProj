#pragma once
#include "CoreMinimal.h"
#include "End/SkeletalMeshUserData.h"
#include "EndEmissiveColorUserData.generated.h"

class UEndColorPalette;

UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UEndEmissiveColorUserData : public USkeletalMeshUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndColorPalette* ColorPalette;
    
    UEndEmissiveColorUserData();
};

