#include "EndAITimerComponent.h"

void UEndAITimerComponent::Suspend(FName InName) {
}

void UEndAITimerComponent::START(float InTime, FName InName) {
}

bool UEndAITimerComponent::NotRunningFromName(FName InName) {
    return false;
}

bool UEndAITimerComponent::NotRunning() {
    return false;
}

bool UEndAITimerComponent::IsRunningFromName(FName InName) {
    return false;
}

bool UEndAITimerComponent::IsRunning() {
    return false;
}

void UEndAITimerComponent::AddTimer(float InTime, FName InName) {
}

UEndAITimerComponent::UEndAITimerComponent() {
}

