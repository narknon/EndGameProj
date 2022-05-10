#pragma once
#include "CoreMinimal.h"
#include "EndIgnoreSkillCameraRelatedActorData.generated.h"

USTRUCT(BlueprintType)
struct FEndIgnoreSkillCameraRelatedActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorName;
    
    ENDGAME_API FEndIgnoreSkillCameraRelatedActorData();
};

