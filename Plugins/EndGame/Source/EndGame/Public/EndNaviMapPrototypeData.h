#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EndNaviMapLocationPrototypeData.h"
#include "EndNaviMapPrototypeData.generated.h"

UCLASS(Blueprintable)
class ENDGAME_API UEndNaviMapPrototypeData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEndNaviMapLocationPrototypeData> Locations;
    
    UEndNaviMapPrototypeData();
};

