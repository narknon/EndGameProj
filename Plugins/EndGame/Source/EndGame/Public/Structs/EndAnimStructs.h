#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/AnimSingleNodeInstanceProxy.h"
#include "EEndLocomotionState.h"
#include "ESuspensionAxisType.h"
#include "EndAnimStructs.generated.h"


USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndFieldCameraOverrideParam
// 0x0040
struct FEndFieldCameraOverrideParam
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bOverrideFOV;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              OverrideFOV;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bOverrideDistance;                                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              OverrideDistance;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bAddAimHeight;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              AddAimHeight;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bOverrideRotate;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FRotator                                    OverrideRotate;                                           // 0x001C(0x000C) (Edit, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bOverrideFollowInverseSpeed;                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              OverrideFollowInverseSpeed;                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bOverrideLocationInverseSpeed;                            // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              OverrideLocationInverseSpeed;                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bOverrideAimOffsetY;                                      // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              OverrideAimOffsetY;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndLocomotionAnim
// 0x000C
struct FEndLocomotionAnim
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bAbstract;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndLocomotionAnimSetting
// 0x0010
struct FEndLocomotionAnimSetting
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	TArray<struct FEndLocomotionAnim>                  Animations;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndAnimResidentBlend
// 0x0018
struct FEndAnimResidentBlend
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       SequenceName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FName                                       BlendBoneName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              PlayRate;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bAutoActive;                                              // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndLocomotionSetting
// 0x00C8
struct FEndLocomotionSetting
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))	
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	TMap<EEndLocomotionState, float>                   PreStateOverrideBlendTimes;                               // 0x0008(0x0050) (Edit, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bOverrideUpperBodyBlend;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              UpperBodyBlendTime;                                       // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	TMap<EEndLocomotionState, float>                   PreStateOverrideUpperBodyBlendTimes;                      // 0x0060(0x0050) (Edit, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              RotationRate;                                             // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bUseSmoothRotationRate;                                   // 0x00B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              SmoothRotationRateMax;                                    // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              SmoothRotationRateInputAngleMax;                          // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              InputBlockTime;                                           // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndAnimVehicleWheel
// 0x0030
struct FEndAnimVehicleWheel
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))	
	float                                              WheelRadius;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              WheelRotation;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              GroundHeight;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FRotator                                    RotationAxis;                                             // 0x000C(0x000C) (Edit, IsPlainOldData)
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
	FBoneReference                              BoneReference;                                            // 0x0018(0x0014) (Edit)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              MaxAngularSpeed;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndAnimVehicleLinearSuspension
// 0x0064
struct FEndAnimVehicleLinearSuspension
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))	
	FVector2D                                   TranslationLimit;                                         // 0x0000(0x0008) (Edit, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              Mass;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              Stiffness;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
	FBoneReference                              SuspensionBone;                                           // 0x0010(0x0014) (Edit)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FEndAnimVehicleWheel                        Wheel;                                                    // 0x0024(0x0030) (Edit)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	TEnumAsByte<ESuspensionAxisType>                   MovementAxis;                                             // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndAnimVehicleAngularSuspension
// 0x00E0
struct FEndAnimVehicleAngularSuspension
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FVector2D                                   TranslationLimit;                                         // 0x0000(0x0008) (Edit, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FVector2D                                   VelocityLimit;                                            // 0x0008(0x0008) (Edit, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FRotator                                    RotationAxis;                                             // 0x0010(0x000C) (Edit, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FRotator                                    AdditiveRotation;                                         // 0x001C(0x000C) (Edit, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bRestrictSuspensionLength;                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              Mass;                                                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              Stiffness;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
	FBoneReference                              SuspensionBone;                                           // 0x0034(0x0014) (Edit)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FEndAnimVehicleWheel                        Wheel;                                                    // 0x0048(0x0030) (Edit)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool                                               bKeepWheelRotation;                                       // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FRotator                                    KeepWheelRotationAxis;                                    // 0x007C(0x000C) (Edit, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FRotator                                    KeepWheelAdditiveRotation;                                // 0x0088(0x000C) (Edit, IsPlainOldData)
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
	FBoneReference                              KeepWheelRotationBone;                                    // 0x0094(0x0014) (Edit)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              KeepWheelLerpAlpha;                                       // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FQuat                                       KeepWheelConcatenateRotation;                             // 0x00B0(0x0010) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              Length;                                                   // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              KeepWheelLength;                                          // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
};


USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndAnimVehicleTurnBone
// 0x0024
struct FEndAnimVehicleTurnBone
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
	FBoneReference                              Bone;                                                     // 0x0000(0x0014) (Edit)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	FVector                                     Axis;                                                     // 0x0014(0x000C) (Edit, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float                                              TurnScale;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};


USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndAnimSetClusterWarning
// 0x0010
struct FEndAnimSetClusterWarning
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	TArray<FName>                               Dependencies;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};


USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndAnimVehicleInstanceProxy
// 0x02B0 (0x0770 - 0x04C0)
struct FEndAnimVehicleInstanceProxy : public FAnimInstanceProxy
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
// ScriptStruct EndGame.EndAnimWeaponInstanceProxy
// 0x0610 (0x0C60 - 0x0650)
struct FEndAnimWeaponInstanceProxy : public FAnimSingleNodeInstanceProxy
{
	GENERATED_BODY()
};