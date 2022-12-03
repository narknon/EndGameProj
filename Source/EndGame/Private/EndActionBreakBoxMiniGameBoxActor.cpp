#include "EndActionBreakBoxMiniGameBoxActor.h"

class AActor;
class UStaticMeshComponent;
class USceneComponent;
class UPrimitiveComponent;

void AEndActionBreakBoxMiniGameBoxActor::SetReferenceStaticMesh(EEndBreakBoxMiniGameBoxType Type, UStaticMeshComponent* StaticMeshComp) {
}

void AEndActionBreakBoxMiniGameBoxActor::SetImpulseRadius(float InRadius) {
}

void AEndActionBreakBoxMiniGameBoxActor::SetEffectDummyPoint(EEndBreakBoxMiniGameEffect Type, USceneComponent* Component) {
}

void AEndActionBreakBoxMiniGameBoxActor::PlayHitSe_TimerFunc() {
}

void AEndActionBreakBoxMiniGameBoxActor::OnEndImpulseInterval() {
}

void AEndActionBreakBoxMiniGameBoxActor::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AEndActionBreakBoxMiniGameBoxActor::Hit_TimerFunc() {
}

EEndBreakBoxMiniGameBoxType AEndActionBreakBoxMiniGameBoxActor::GetBoxType() {
    return EEndBreakBoxMiniGameBoxType::NORMAL;
}

void AEndActionBreakBoxMiniGameBoxActor::Deactive_TimerFunc() {
}

EEndBreakBoxMiniGameBoxType AEndActionBreakBoxMiniGameBoxActor::ApplyBoxType() {
    return EEndBreakBoxMiniGameBoxType::NORMAL;
}

AEndActionBreakBoxMiniGameBoxActor::AEndActionBreakBoxMiniGameBoxActor() {
    this->m_BoxType = EEndBreakBoxMiniGameBoxType::NORMAL;
    this->m_bHighGreadL = false;
    this->m_GroupIndex = 0;
    this->m_Radius = 0.00f;
    this->m_Effect[0] = NULL;
    this->m_Effect[1] = NULL;
    this->m_Effect[2] = NULL;
    this->m_Effect[3] = NULL;
    this->m_StaticMeshComponent[0] = NULL;
    this->m_StaticMeshComponent[1] = NULL;
    this->m_StaticMeshComponent[2] = NULL;
    this->m_StaticMeshComponent[3] = NULL;
    this->m_StaticMeshComponent[4] = NULL;
    this->m_StaticMeshComponent[5] = NULL;
    this->m_StaticMeshComponent[6] = NULL;
    this->m_StaticMeshComponent[7] = NULL;
    this->m_StaticMeshComponent[8] = NULL;
    this->m_StaticMeshComponent[9] = NULL;
    this->m_StaticMeshComponent[10] = NULL;
    this->m_EffectDummyPoint[0] = NULL;
    this->m_EffectDummyPoint[1] = NULL;
    this->m_EffectDummyPoint[2] = NULL;
    this->m_EffectDummyPoint[3] = NULL;
    this->HitSoundAsset = NULL;
}

