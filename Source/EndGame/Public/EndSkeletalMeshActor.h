#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "EndActorInterface.h"
#include "EndAnimActorInterface.h"
#include "EndActorBaseInterface.h"
#include "EEndEmissiveModifierType.h"
#include "EEndEmissiveCurveType.h"
#include "EndSkeletalMeshActor.generated.h"

class UActorComponent;
class USQEX_KBD_Component;
class USQEX_Bonamik_Component;
class UEndEmissiveColorComponent;

UCLASS(Blueprintable)
class ENDGAME_API AEndSkeletalMeshActor : public ASkeletalMeshActor, public IEndActorInterface, public IEndActorBaseInterface, public IEndAnimActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<FName, UActorComponent*> ComponentTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEX_KBD_Component* KBD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEX_Bonamik_Component* Bonamik;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEndEmissiveColorComponent* EmissiveColorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcedUsePhysicsAssetBounds;
    
    AEndSkeletalMeshActor();
    UFUNCTION(BlueprintCallable)
    void StopEmissiveColorAnimation(FName RequestID);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectEmissiveColor(FName ColorPaletteId, float IntensityBias);
    
    UFUNCTION(BlueprintCallable)
    void ResetDirectEmissiveColor();
    
    UFUNCTION(BlueprintCallable)
    void PlayEmissiveColorAnimation(FName RequestID, FName ColorPaletteId, EEndEmissiveModifierType ModifierType, EEndEmissiveCurveType CurveType, bool bLoop, float Duration, float BlendInTime, float BlendOutTime, float StartOffset, float EndOffset);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDefaultEmissiveColor();
    
    
    // Fix for true pure virtual functions not being implemented
};

