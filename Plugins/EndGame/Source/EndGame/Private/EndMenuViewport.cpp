// Fill out your copyright notice in the Description page of Project Settings.

#include "EndMenuViewport.h"


class AActor;
class UWorld;

AActor* UEndMenuViewport::Spawn(TSubclassOf<AActor> ActorClass) {
	return NULL;
}

void UEndMenuViewport::SetViewRotation(FRotator Rotation) {
}

void UEndMenuViewport::SetViewLocation(FVector Location) {
}

FRotator UEndMenuViewport::GetViewRotation() const {
	return FRotator{};
}

UWorld* UEndMenuViewport::GetViewportWorld() const {
	return NULL;
}

FVector UEndMenuViewport::GetViewLocation() const {
	return FVector{};
}

UEndMenuViewport::UEndMenuViewport() {
}

