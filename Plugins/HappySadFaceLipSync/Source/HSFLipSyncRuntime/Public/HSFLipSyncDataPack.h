#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HSFLipSyncData.h"
#include "HSFLipSyncDataPack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHSFLipSyncDataPack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHSFLipSyncData> Data;
    
    UHSFLipSyncDataPack();
};

