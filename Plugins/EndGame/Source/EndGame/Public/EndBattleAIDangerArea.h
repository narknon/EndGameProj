#pragma once
#include "CoreMinimal.h"
#include "EEndBattleAIDangerAreaType.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleAIDangerArea.generated.h"

USTRUCT(BlueprintType)
struct FEndBattleAIDangerArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndBattleAIDangerAreaType DangerAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CenterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float Length;
    
    UPROPERTY(EditAnywhere)
    float Width;
    
    ENDGAME_API FEndBattleAIDangerArea();
};

