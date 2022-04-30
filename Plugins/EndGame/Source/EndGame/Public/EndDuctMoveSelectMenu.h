#pragma once
#include "CoreMinimal.h"
#include "EEndMoveOrder.h"
#include "EndDuctMoveSelectMenu.generated.h"

USTRUCT(BlueprintType)
struct FEndDuctMoveSelectMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChoicesText1;
    
    UPROPERTY(EditAnywhere)
    EEndMoveOrder ChoicesMoveOrder1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChoicesText2;
    
    UPROPERTY(EditAnywhere)
    EEndMoveOrder ChoicesMoveOrder2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressMngFlag;
    
    UPROPERTY(EditAnywhere)
    EEndMoveOrder CorrectRouteMoveOrder;
    
    ENDGAME_API FEndDuctMoveSelectMenu();
};

