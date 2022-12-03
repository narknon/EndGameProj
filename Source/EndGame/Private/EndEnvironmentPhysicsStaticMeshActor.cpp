#include "EndEnvironmentPhysicsStaticMeshActor.h"
#include "Components/CapsuleComponent.h"
#include "EndItemDropComponent.h"

class UPrimitiveComponent;
class AActor;

void AEndEnvironmentPhysicsStaticMeshActor::PlayHitSe_TimerFunc() {
}

void AEndEnvironmentPhysicsStaticMeshActor::OnEndImpulseInterval() {
}

void AEndEnvironmentPhysicsStaticMeshActor::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

AEndEnvironmentPhysicsStaticMeshActor::AEndEnvironmentPhysicsStaticMeshActor() {
    this->bNoPhysOffLock = false;
    this->bNoInitMask = false;
    this->bIgnoreStateManagement = false;
    this->bParentCollisionPresetsToOther = false;
    this->bPostLoadedLevelAwake = true;
    this->bNeverAwake = false;
    this->ItemDropComponent = CreateDefaultSubobject<UEndItemDropComponent>(TEXT("ItemDropComponent"));
    this->BattleOverlapCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->HitSoundAsset = NULL;
    this->FractureSoundAsset = NULL;
}

