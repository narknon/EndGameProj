#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "EndAnimVehicleUserData.generated.h"

UCLASS(EditInlineNew)
class UEndAnimVehicleUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Mass;
    
    UEndAnimVehicleUserData();
};

