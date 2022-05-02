#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableStoryFlag.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableStoryFlag : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterID;
    
    UPROPERTY(EditAnywhere)
    uint8 ExtraType00;
    
    UPROPERTY(EditAnywhere)
    uint8 ExtraType01;
    
    UPROPERTY(EditAnywhere)
    uint8 ExtraType02;
    
    UPROPERTY(EditAnywhere)
    uint8 ExtraType03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FuncType;
    
    FEndDataTableStoryFlag();
};

