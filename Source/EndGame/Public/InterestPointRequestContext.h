#pragma once
#include "CoreMinimal.h"
#include "EEndInterestPointReactionActorType.h"
#include "EEndInterestPointTemplate.h"
#include "InterestPointRequestContext.generated.h"

USTRUCT(BlueprintType)
struct FInterestPointRequestContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndInterestPointReactionActorType Type;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndInterestPointTemplate TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideId;
    
    ENDGAME_API FInterestPointRequestContext();
};

