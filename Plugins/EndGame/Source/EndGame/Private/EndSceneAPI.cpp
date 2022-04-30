#include "EndSceneAPI.h"

class AActor;
class AEndNavModifierVolume;

bool UEndSceneAPI::ValidateSimpleCameraWall(FName TargetActorName) {
    return false;
}

void UEndSceneAPI::UnBindActor(FName Parent, EWeaponSlot Slot) {
}

bool UEndSceneAPI::TeleportActor(FName LevelName, FName ActorName, AActor* TargetActor, bool bApplyDestRotation) {
    return false;
}

void UEndSceneAPI::SetOverwriteEnvinronment(const FName& EnvironmentSetKeyName, EEndEnvironmentSetOverritePriority Priority) {
}

bool UEndSceneAPI::MoveToTargetPoint(FName TargetActorName, FVector TargetLocation) {
    return false;
}

bool UEndSceneAPI::IsStableEnvironmentSet() {
    return false;
}

bool UEndSceneAPI::IsDrawPause(AActor* Actor) {
    return false;
}

bool UEndSceneAPI::InvalidateSimpleCameraWall(FName TargetActorName) {
    return false;
}

FTransform UEndSceneAPI::GetNavTransformFromLevel(FName Level, FName Name) {
    return FTransform{};
}

FTransform UEndSceneAPI::GetNavTransform(FName Name) {
    return FTransform{};
}

FRotator UEndSceneAPI::GetNavRotationFromLevel(FName Level, FName Name) {
    return FRotator{};
}

FRotator UEndSceneAPI::GetNavRotation(FName Name) {
    return FRotator{};
}

FVector UEndSceneAPI::GetNavLocationFromLevel(FName Level, FName Name) {
    return FVector{};
}

FVector UEndSceneAPI::GetNavLocation(FName Name) {
    return FVector{};
}

AEndNavModifierVolume* UEndSceneAPI::GetNavFromNameAndLevel(FName Level, FName Name) {
    return NULL;
}

AEndNavModifierVolume* UEndSceneAPI::GetNavFromName(FName Name) {
    return NULL;
}

bool UEndSceneAPI::FollowToTargetActor(FName TargetActorName, FName FollowTargetActorName) {
    return false;
}

int32 UEndSceneAPI::DestroyActorBP(FName Name) {
    return 0;
}

int32 UEndSceneAPI::CreateActorBP(FName Name, FName CharaSpec, FVector Location, FRotator Rotation) {
    return 0;
}

void UEndSceneAPI::CancelOverwirttenEnvironmentSet(EEndEnvironmentSetOverritePriority Priority) {
}

void UEndSceneAPI::BindActor(FName Parent, FName child, FName socket, EWeaponSlot Slot) {
}

UEndSceneAPI::UEndSceneAPI() {
}

