#pragma once
#include "CoreMinimal.h"
#include "EndCameraRail.h"
#include "EndAimOnlyRail.generated.h"

UCLASS(Blueprintable)
class AEndAimOnlyRail : public AEndCameraRail {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartBlendTime;
    
    UPROPERTY(EditAnywhere)
    float EndBlendTime;
    
    UPROPERTY(EditAnywhere)
    float ControllLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCollisionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseForceConnect;
    
    AEndAimOnlyRail();
};

