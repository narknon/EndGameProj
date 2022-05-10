#pragma once
#include "CoreMinimal.h"
#include "EEndHandType.h"
#include "UObject/NoExportTypes.h"
#include "EndHandEffectorSolveHand.generated.h"

USTRUCT(BlueprintType)
struct FEndHandEffectorSolveHand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEndHandType> ContainsHandTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HandBoneName;
    
    UPROPERTY(EditAnywhere)
    float ShoulderStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HandProcessNumBonesInLimb;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> HandBoneForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableElbowTwistCorrection;
    
    ENDGAME_API FEndHandEffectorSolveHand();
};

