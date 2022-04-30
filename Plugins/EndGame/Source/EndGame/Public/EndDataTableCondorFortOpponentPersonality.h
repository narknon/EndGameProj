#pragma once
#include "CoreMinimal.h"
#include "EndDataTableRowBase.h"
#include "EndDataTableCondorFortOpponentPersonality.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndDataTableCondorFortOpponentPersonality : public FEndDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 UnitRatio;
    
    UPROPERTY(EditAnywhere)
    uint8 MateriaRatio;
    
    UPROPERTY(EditAnywhere)
    uint8 ATB;
    
    UPROPERTY(EditAnywhere)
    uint8 Priority;
    
    UPROPERTY(EditAnywhere)
    uint8 PriorityOwn;
    
    UPROPERTY(EditAnywhere)
    uint8 Placement;
    
    UPROPERTY(EditAnywhere)
    uint8 PrimaryRole;
    
    UPROPERTY(EditAnywhere)
    uint8 SecondaryRorle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseMateria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UseUnit;
    
    UPROPERTY(EditAnywhere)
    uint8 MateriaAccuracy;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> switchTiming_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> switchTerm_Array;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> switchValue_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> switchMateria_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> switchUnit_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> switchName_Array;
    
    FEndDataTableCondorFortOpponentPersonality();
};

