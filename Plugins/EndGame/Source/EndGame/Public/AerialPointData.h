#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AerialPointData.generated.h"

USTRUCT(BlueprintType)
struct FAerialPointData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector pos;
    
    UPROPERTY(EditAnywhere)
    TArray<uint16> neighborPointIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InBattleArea;
    
    ENDGAME_API FAerialPointData();
};

