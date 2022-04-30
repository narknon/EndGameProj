#pragma once
#include "CoreMinimal.h"
#include "EndPhysicalConstraintBoneSetting.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndPhysicalConstraintBoneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InfluenceRotationBoneNames;
    
    UPROPERTY(EditAnywhere)
    float Mass;
    
    UPROPERTY(EditAnywhere)
    float GravityScale;
    
    UPROPERTY(EditAnywhere)
    float BlendRate;
    
    UPROPERTY(EditAnywhere)
    float VelocityRate;
    
    UPROPERTY(EditAnywhere)
    float VelocityBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTranslationOnly;
    
    UPROPERTY(EditAnywhere)
    float DebugDrawRadius;
    
    FEndPhysicalConstraintBoneSetting();
};

