#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableBikePlayerCharaSpec.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableBikePlayerCharaSpec : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VehicleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RiderName_Array;
    
    UPROPERTY(EditAnywhere)
    float SpeedDefault;
    
    UPROPERTY(EditAnywhere)
    float CameraAimOffsetDepth;
    
    UPROPERTY(EditAnywhere)
    float CameraAimOffsetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlayerFeedbackID_Array;
    
    UPROPERTY(EditAnywhere)
    float DistanceRangeMax;
    
    UPROPERTY(EditAnywhere)
    float DistanceRangeMin;
    
    UPROPERTY(EditAnywhere)
    float RelativeSpeedAtPlayerAccel;
    
    UPROPERTY(EditAnywhere)
    float RelativeSpeedAtPlayerBrake;
    
    UPROPERTY(EditAnywhere)
    float LiveKeepTimeEasy;
    
    UPROPERTY(EditAnywhere)
    float LiveKeepTimeNormal;
    
    UPROPERTY(EditAnywhere)
    float LiveKeepTimeHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MachineNameTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysObjCapsuleFrontSocket;
    
    UPROPERTY(EditAnywhere)
    float PhysObjCapsuleFrontOffsetDepth;
    
    UPROPERTY(EditAnywhere)
    float PhysObjCapsuleFrontOffsetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhysObjCapsuleRearSocket;
    
    UPROPERTY(EditAnywhere)
    float PhysObjCapsuleRadius;
    
    UPROPERTY(EditAnywhere)
    uint8 PhysObjImplusScale;
    
    UPROPERTY(EditAnywhere)
    float PhysObjImplusRadius;
    
    UPROPERTY(EditAnywhere)
    float PhysObjForceValue;
    
    UPROPERTY(EditAnywhere)
    float PhysObjForceAmplifierMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeadTriggerSetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BikeRepierEffectName;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableWeaponHitWall;
    
    UPROPERTY(EditAnywhere)
    uint8 EnableWeaponHitTerrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponHitBackgroundEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlayerTriggerEffect_Array;
    
    FEndDataTableBikePlayerCharaSpec();
};

