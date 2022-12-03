#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "EndAnimVehicleUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEndAnimVehicleUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UEndAnimVehicleUserData();
};

