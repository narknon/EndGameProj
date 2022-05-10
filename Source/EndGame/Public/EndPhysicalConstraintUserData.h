#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "EndPhysicalConstraintUserData.generated.h"

class UEndPhysicalConstraintSetting;

UCLASS(Blueprintable, EditInlineNew)
class ENDGAME_API UEndPhysicalConstraintUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndPhysicalConstraintSetting* Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEndPhysicalConstraintSetting* PostSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UEndPhysicalConstraintUserData();
};

