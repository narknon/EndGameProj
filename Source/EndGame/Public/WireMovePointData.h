#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEndWireMeshMoveStartType.h"
#include "WireMovePointData.generated.h"

USTRUCT(BlueprintType)
struct FWireMovePointData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector pos;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> neighborPointIndexes;
    
    UPROPERTY(EditAnywhere)
    EEndWireMeshMoveStartType StartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGoalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BottomPos;
    
    ENDGAME_API FWireMovePointData();
};

