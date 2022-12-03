#include "EndEnvQueryComponent.h"

class AActor;
class UEnvQuery;

void UEndEnvQueryComponent::SetQueryAllActive(TEnumAsByte<EEqsType::Type> Index, bool Flag) {
}

void UEndEnvQueryComponent::SetQueryActive(TEnumAsByte<EEqsType::Type> Index, bool Flag) {
}

void UEndEnvQueryComponent::SetQuery(TEnumAsByte<EEqsType::Type> Index, UEnvQuery* InQuery) {
}

void UEndEnvQueryComponent::RunQuery(float DeltaTime) {
}

bool UEndEnvQueryComponent::IsQueryVisible(TEnumAsByte<EEqsType::Type> Index) {
    return false;
}

float UEndEnvQueryComponent::GetScore(TEnumAsByte<EEqsType::Type> Index, int32 ID) {
    return 0.0f;
}

FVector UEndEnvQueryComponent::GetLocation(TEnumAsByte<EEqsType::Type> Index, int32 ID) {
    return FVector{};
}

AActor* UEndEnvQueryComponent::GetActor(TEnumAsByte<EEqsType::Type> Index, int32 ID) {
    return NULL;
}

UEndEnvQueryComponent::UEndEnvQueryComponent() {
}

