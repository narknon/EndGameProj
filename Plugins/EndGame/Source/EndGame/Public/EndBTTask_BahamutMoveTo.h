#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EEndQueryFilterType.h"
#include "EndBTTask_BahamutMoveTo.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class UEndBTTask_BahamutMoveTo : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LocationBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LookAtBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEndQueryFilterType NavQueryFilterType;
    
    UPROPERTY(EditAnywhere)
    float ArrivalRadius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopMoveWhenFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveRequestBlackBoardName;
    
    UPROPERTY(EditAnywhere)
    float HeightTolerance;
    
    UPROPERTY(EditAnywhere)
    float HeightAdjustTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(EditAnywhere)
    float StuckTimeLimit;
    
    UPROPERTY(EditAnywhere)
    float MoveTimeLimit;
    
    UEndBTTask_BahamutMoveTo();
};

