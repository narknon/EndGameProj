#pragma once
#include "CoreMinimal.h"
#include "EEndAiCharaType.h"
#include "EndBoidsTypeParam.generated.h"

USTRUCT(BlueprintType)
struct FEndBoidsTypeParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEndAiCharaType::Type> InfluencersType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Influencers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RoleCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBoids;
    
    UPROPERTY(EditAnywhere)
    float BoidsRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepulsive;
    
    UPROPERTY(EditAnywhere)
    float RepulsiveRadius;
    
    ENDGAME_API FEndBoidsTypeParam();
};

