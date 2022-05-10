#include "EndCharacter.h"
#include "EndFootAttributeComponent.h"
#include "EndCapsuleOverlapComponent.h"
#include "EndEnvQueryComponent.h"
#include "EndSkeletalMeshComponent.h"

void AEndCharacter::UseHookShotSimple(const FVector& landingLocation, const FRotator& LandingRotation) {
}

void AEndCharacter::StopEmissiveColorAnimation(FName RequestID) {
}

void AEndCharacter::SetIgnoreRagdollPhysics(bool Value) {
}

void AEndCharacter::SetDirectEmissiveColor(FName ColorPaletteId, float IntensityBias) {
}

void AEndCharacter::SetChildMesh(FName meshName, FName Label) {
}

void AEndCharacter::ResetRagdollPhysics() {
}

void AEndCharacter::ResetEndCutSceneCorrectionHeight() {
}

void AEndCharacter::ResetDirectEmissiveColor() {
}

void AEndCharacter::RequestRagdollPostActivation() {
}

void AEndCharacter::RequestRagdollCollisionOff() {
}

void AEndCharacter::RequestDeactivateRagdoll() {
}

void AEndCharacter::RequestActivateRagdoll() {
}

void AEndCharacter::PlayEmissiveColorAnimation(FName RequestID, FName ColorPaletteId, EEndEmissiveModifierType ModifierType, EEndEmissiveCurveType CurveType, bool bLoop, float Duration, float BlendInTime, float BlendOutTime, float StartOffset, float EndOffset) {
}

void AEndCharacter::OverrideDefaultEmissiveColor() {
}



void AEndCharacter::OnBodyDriverRagdollReadyForRemoval() {
}

void AEndCharacter::OnBodyDriverRagdollImpact() {
}


bool AEndCharacter::IsRagdollPhysicsEnabled() const {
    return false;
}

bool AEndCharacter::IsPlayer() const {
    return false;
}

FRotator AEndCharacter::GetPointRotationFromOwnPosture(FVector InLocation) {
    return FRotator{};
}

FVector AEndCharacter::GetPointDirectionFromOwnPosture(FVector InLocation) {
    return FVector{};
}

FVector AEndCharacter::GetFeetLocation() {
    return FVector{};
}

UEndEnvQueryComponent* AEndCharacter::GetEQSComponent() {
    return NULL;
}

void AEndCharacter::EnableRagdollPhysics(bool bDisableMovement, bool bForceDisableBodyDriver) {
}

void AEndCharacter::EnableKineDriver() {
}

void AEndCharacter::DisableRagdollPhysics(float FadeOutTime, bool bCenterActorToHip, bool bResetRelativeTransform) {
}

void AEndCharacter::DisableKineDriver() {
}

AEndCharacter::AEndCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UEndSkeletalMeshComponent>(ACharacter::MeshComponentName)) {
    this->bResidentEffectIgnoreWorldPause = false;
    this->FieldAIControllerClass = NULL;
    this->FieldAIController = NULL;
    this->BattleAIController = NULL;
    this->BikeAIController = NULL;
    this->PlayerAiController = NULL;
    this->ActiveAiController = NULL;
    this->ActorLocationStackPoint = 0;
    this->ActorRotationStackPoint = 0;
    this->WorkDeltaTime = 1;
    this->bRecreatePhysicsOnEnableRagdoll = false;
    this->FootAttributeComponent = CreateDefaultSubobject<UEndFootAttributeComponent>(TEXT("EndFootAttributeComponent"));
    this->EndCapsuleOverlapComponent = CreateDefaultSubobject<UEndCapsuleOverlapComponent>(TEXT("CapsuleOverlapComponent"));
    this->KBD = NULL;
    this->KineDriver = NULL;
    this->Bonamik = NULL;
    this->EnvironmentQueryComponent = CreateDefaultSubobject<UEndEnvQueryComponent>(TEXT("EnvQueryComponent"));
    this->BattleTalkCharacterComponent = NULL;
    this->AerialRouteSearchInstance = NULL;
    this->Biped = true;
    this->Rig = NULL;
    this->FacialRig = NULL;
    this->AIPersonalityData = NULL;
    this->AITemplateData = NULL;
    this->ExistOverrideAnimSet = false;
    this->LookAtSpeedBias = 1;
    this->LookAtAngleBias = 1;
    this->LookAtClampHorizontalDistanceBias = 1;
    this->bOverrideAdjustOrientationSetting = false;
    this->AdjustOrientationTransRate = 1;
    this->bAdjustSkeletalMeshLocation = true;
    this->bForceUpdateAnimation = false;
    this->bForceUpdateKinematicBonesUpdateToPhysics = false;
    this->EmissiveColorComponent = NULL;
    this->bCanFieldAttack = false;
    this->FieldExtraRadius = 1;
    this->BattleExtraRadius = 1;
    this->IgnoreRagdollPhysics = false;
}

