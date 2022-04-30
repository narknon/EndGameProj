#pragma once
#include "CoreMinimal.h"
#include "GravityAndAirResistanceControl.generated.h"

USTRUCT(BlueprintType)
struct FGravityAndAirResistanceControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableGravityControl;
    
    UPROPERTY(EditAnywhere)
    float GravityControlStartTime;
    
    UPROPERTY(EditAnywhere)
    float GravityControlRampUpTime;
    
    UPROPERTY(EditAnywhere)
    float GravityControlEndTime;
    
    UPROPERTY(EditAnywhere)
    float ExtraGravityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAirResistanceControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AirResistanceOnlyPlanar;
    
    UPROPERTY(EditAnywhere)
    float AirResistanceControlStartTime;
    
    UPROPERTY(EditAnywhere)
    float AirResistanceControlRampUpTime;
    
    UPROPERTY(EditAnywhere)
    float AirResistanceControlEndTime;
    
    UPROPERTY(EditAnywhere)
    float AirResistanceMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float AirResistanceStrength;
    
    UPROPERTY(EditAnywhere)
    float AngularDamping;
    
    UPROPERTY(EditAnywhere)
    float CleanupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableCollision;
    
    UPROPERTY(EditAnywhere)
    float DisableCollisionStartTime;
    
    BODYDRIVERPLUGIN_API FGravityAndAirResistanceControl();
};

