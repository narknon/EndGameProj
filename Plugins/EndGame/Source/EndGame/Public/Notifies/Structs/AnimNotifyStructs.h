#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyStructs.generated.h"

///// Notify States

USTRUCT(BlueprintType)
struct FEndOverrideLocomotionSetting
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       SequenceName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              Rate;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


USTRUCT(BlueprintType)
struct FEndPhysicalConstraintBoneSetting
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	TArray<FName>                               InfluenceRotationBoneNames;                               // 0x0008(0x0010) (Edit, ZeroConstructor)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              Mass;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              GravityScale;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BlendRate;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              VelocityRate;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              VelocityBlendRate;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	bool                                               bTranslationOnly;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              DebugDrawRadius;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndPhysicalConstraintSetting_LastPosition
// 0x0014
struct FEndPhysicalConstraintSetting_LastPosition
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       BoneName0;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BoneCorrectBias0;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              OldPositionRate;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	bool                                               bUseAnimPosition;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndPhysicalConstraintSetting_AnimPosition
// 0x001C
struct FEndPhysicalConstraintSetting_AnimPosition
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       BoneName0;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	FName                                       BoneName1;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BoneInvMassBias0;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BoneInvMassBias1;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              Stiffness;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndPhysicalConstraintSetting_AnimPositionVelocity
// 0x0028
struct FEndPhysicalConstraintSetting_AnimPositionVelocity
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       BoneName0;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	FName                                       BoneName1;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BoneInvMassBias0;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BoneInvMassBias1;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	FVector2D                                   DistanceRange;                                            // 0x0018(0x0008) (Edit, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	FVector2D                                   VelocityRange;                                            // 0x0020(0x0008) (Edit, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndPhysicalConstraintSetting_Distance
// 0x0028
struct FEndPhysicalConstraintSetting_Distance
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       BoneName0;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	FName                                       BoneName1;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BoneInvMassBias0;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BoneInvMassBias1;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              CompressionStiffness;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              StretchStiffness;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              OverrideDistance;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	bool                                               bCalculate2D;                                             // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndPhysicalConstraintSetting_RandomImpulse
// 0x0028
struct FEndPhysicalConstraintSetting_RandomImpulse
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       BoneName0;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	FVector                                     ImpulseMin;                                               // 0x0008(0x000C) (Edit, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	FVector                                     ImpulseMax;                                               // 0x0014(0x000C) (Edit, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	FVector2D                                   Cycle;                                                    // 0x0020(0x0008) (Edit, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndPhysicalConstraintSetting_ContactCharacter
// 0x0014
struct FEndPhysicalConstraintSetting_ContactCharacter
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       BoneName0;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	FName                                       BoneContactBoneName;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BoneContactRadius0;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndPhysicalConstraintSetting_TemporalAnimPosition
// 0x001C
struct FEndPhysicalConstraintSetting_TemporalAnimPosition
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       BoneName0;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	FName                                       BoneName1;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BoneInvMassBias0;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              BoneInvMassBias1;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
 	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true)) 
	float                                              Stiffness;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndPlayParticleActorInfo
// 0x000C
struct FEndPlayParticleActorInfo
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	uint8                                      m_Enable : 1;                                             // 0x0000(0x0001) (Edit)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       m_SocketName;                                             // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};


///// Notifies

