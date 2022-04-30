#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "EndAnimVehicleTurnBone.generated.h"

USTRUCT(BlueprintType)
struct FEndAnimVehicleTurnBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Axis;
    
    UPROPERTY(EditAnywhere)
    float TurnScale;
    
    ENDGAME_API FEndAnimVehicleTurnBone();
};

