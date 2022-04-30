#pragma once
#include "CoreMinimal.h"
#include "EJumpStartType.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "EndFieldActionActorBase.h"
#include "EJumpType.h"
#include "EndFieldActionActorJump.generated.h"

class UEndFieldActionTriggerComponent;
class UEndNavModifierComponent;

UCLASS(Blueprintable, Placeable)
class ENDGAME_API AEndFieldActionActorJump : public AEndFieldActionActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndFieldActionTriggerComponent* EnterVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndFieldActionTriggerComponent* ExitVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndNavModifierComponent* ModifierVolume;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENavLinkDirection::Type> JumpDirection;
    
    UPROPERTY(EditAnywhere)
    float JumpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpType JumpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpStartType StartJumpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HiddenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotUpdateVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StraddleExtensions;
    
    UPROPERTY(EditAnywhere)
    float JumpAngleToLeft;
    
    UPROPERTY(EditAnywhere)
    float FlightDurationToLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawRightToLeft;
    
    UPROPERTY(EditAnywhere)
    float JumpAngleToRight;
    
    UPROPERTY(EditAnywhere)
    float FlightDurationToRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawLeftToRight;
    
    UPROPERTY(EditAnywhere)
    float ToRightOverrideVelocity;
    
    UPROPERTY(EditAnywhere)
    float ToLeftOverrideVelocity;
    
    UPROPERTY(EditAnywhere)
    float OverrideHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableConnectJump;
    
    AEndFieldActionActorJump();
};

