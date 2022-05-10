#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EndBattleDamageSourceCollisionDataBox.generated.h"

USTRUCT(BlueprintType)
struct ENDGAME_API FEndBattleDamageSourceCollisionDataBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    float X;
    
    UPROPERTY(EditAnywhere)
    float Y;
    
    UPROPERTY(EditAnywhere)
    float Z;
    
    FEndBattleDamageSourceCollisionDataBox();
};

