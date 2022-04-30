#pragma once
#include "CoreMinimal.h"
#include "Particles/Collision/ParticleModuleCollision.h"
#include "EndParticleModuleCollision.generated.h"

/*
UCLASS(Blueprintable, meta=(DisplayName = "EnActor Collision"))
class UEnParticleModuleCollision : public UParticleModuleCollisionBase
{
	GENERATED_BODY()
public:
	UEnParticleModuleCollision();
};*/

/*UCLASS(Blueprintable, meta=(DisplayName = "EnActor Collision"))
class UEnParticleModuleCollision : public UParticleModuleCollisionBase
{
	GENERATED_BODY()
public:	
	UPROPERTY(EditAnywhere)
	FRawDistributionVector                      DampingFactor;                                            // 0x0038(0x0060) (Edit)
	UPROPERTY(EditAnywhere)
	FRawDistributionVector                      DampingFactorRotation;                                    // 0x0098(0x0060) (Edit)
	UPROPERTY(EditAnywhere)
	FRawDistributionFloat                       MaxCollisions;                                            // 0x00F8(0x0040) (Edit)
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EParticleCollisionComplete>            CollisionCompletionOption;                                // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere)
	TArray<TEnumAsByte<EObjectTypeQuery>>              CollisionTypes;                                           // 0x0140(0x0010) (Edit, ZeroConstructor)
	UPROPERTY(EditAnywhere)
	uint32                                     bApplyPhysics : 1;                                        // 0x0158(0x0001) (Edit)
	UPROPERTY(EditAnywhere)
	uint32                                      bIgnoreTriggerVolumes : 1;                                // 0x0158(0x0001) (Edit)
	UPROPERTY(EditAnywhere)
	FRawDistributionFloat                       ParticleMass;                                             // 0x0160(0x0040) (Edit)
	UPROPERTY(EditAnywhere)
	float                                              DirScalar;                                                // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere)
	uint32                                      bPawnsDoNotDecrementCount : 1;                            // 0x01A4(0x0001) (Edit)
	UPROPERTY(EditAnywhere)
	uint32                                       bOnlyVerticalNormalsDecrementCount : 1;                   // 0x01A4(0x0001) (Edit)
	UPROPERTY(EditAnywhere)
	float                                              VerticalFudgeFactor;                                      // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere)
	FRawDistributionFloat                       DelayAmount;                                              // 0x01B0(0x0040) (Edit)
	UPROPERTY(EditAnywhere)
	uint32                                      bDropDetail : 1;                                          // 0x01F0(0x0001) (Edit)
	UPROPERTY(EditAnywhere)
	uint32                                       bCollideOnlyIfVisible : 1;                                // 0x01F0(0x0001) (Edit)
	UPROPERTY(EditAnywhere)
	uint32                                       bIgnoreSourceActor : 1;                                   // 0x01F0(0x0001) (Edit)
	UPROPERTY(EditAnywhere)
	float                                              MaxCollisionDistance;                                     // 0x01F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
    
    UEnParticleModuleCollision();
};*/

UCLASS(Blueprintable)
class UEndParticleModuleCollision : public UParticleModuleCollision {
    GENERATED_BODY()
/*public:
    UPROPERTY(EditAnywhere)
    float m_HitOffsetNormalScale;
    
    UPROPERTY(EditAnywhere)
    float m_FreezeTranslationVelocityLength;*/
    
    UEndParticleModuleCollision();
};

