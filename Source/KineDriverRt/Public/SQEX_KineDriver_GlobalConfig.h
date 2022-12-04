#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SQEX_KineDriver_GlobalConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class KINEDRIVERRT_API USQEX_KineDriver_GlobalConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiThreadUpdate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableUpdateOverlaps;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRuntimeBoneNameLookup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowNoBoneWarning;
    
    USQEX_KineDriver_GlobalConfig();
};

