#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCondorFortMateria.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCondorFortMateria : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HelpTextID;
    
    UPROPERTY(EditAnywhere)
    uint8 Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DamageSourceID;
    
    UPROPERTY(EditAnywhere)
    uint8 Category;
    
    UPROPERTY(EditAnywhere)
    uint8 Type;
    
    UPROPERTY(EditAnywhere)
    float RecastTime;
    
    UPROPERTY(EditAnywhere)
    uint8 Kind;
    
    UPROPERTY(EditAnywhere)
    uint8 Attr;
    
    UPROPERTY(EditAnywhere)
    uint8 Size;
    
    FEndDataTableCondorFortMateria();
};

