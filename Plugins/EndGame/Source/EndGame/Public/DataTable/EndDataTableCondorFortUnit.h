#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCondorFortUnit.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCondorFortUnit : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HelpTextID;
    
    UPROPERTY(EditAnywhere)
    uint8 Reality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Image;
    
    UPROPERTY(EditAnywhere)
    uint8 Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FormationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CharacterID_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> PointIndex_Array;
    
    FEndDataTableCondorFortUnit();
};

