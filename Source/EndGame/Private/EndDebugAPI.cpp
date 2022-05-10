#include "EndDebugAPI.h"

TArray<FString> UEndDebugAPI::UpdateSelectHistory(const TArray<FString>& list, bool changeOrder) {
    return TArray<FString>();
}

void UEndDebugAPI::TraceGPU() {
}

void UEndDebugAPI::StopCPUCapture() {
}

void UEndDebugAPI::StartCPUCapture() {
}

void UEndDebugAPI::SetControlRotation(float Pitch, float Yaw, float Roll) {
}

void UEndDebugAPI::RequestExit() {
}

void UEndDebugAPI::PrintMemory() {
}

bool UEndDebugAPI::IsCompletedTrace() {
    return false;
}

bool UEndDebugAPI::GetDebugStateBool(FName TableID, bool defaultBool) {
    return false;
}

FString UEndDebugAPI::GetDebugState(FName TableID, const FString& defaultState) {
    return TEXT("");
}

FString UEndDebugAPI::GetCutSceneEventID(FName Action) {
    return TEXT("");
}

void UEndDebugAPI::AddSelectHistory(const FString& str) {
}

void UEndDebugAPI::AddAction(FName Action) {
}

UEndDebugAPI::UEndDebugAPI() {
}

