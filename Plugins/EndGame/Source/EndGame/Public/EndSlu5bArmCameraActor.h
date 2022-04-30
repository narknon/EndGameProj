#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndSlu5bArmCameraActor.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class AEndSlu5bArmCameraActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReverseAngle;
    
    UPROPERTY(EditAnywhere)
    float ChangeSequenceSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* DefaultVerticalRCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* DefaultHorizontalRCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* CharacterVerticalRCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* CharacterHorizontalRCS;
    
    AEndSlu5bArmCameraActor();
};

