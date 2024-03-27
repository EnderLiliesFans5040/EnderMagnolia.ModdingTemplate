#include "SpineSkeletonRendererComponent.h"

USpineSkeletonRendererComponent::USpineSkeletonRendererComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCanEverAffectNavigation = false;
    this->DepthOffset = 0.01f;
    this->bInvertDepthOffsetWithRotation = false;
    this->TextureParameterName = TEXT("SpriteTexture");
}

void USpineSkeletonRendererComponent::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {
}

void USpineSkeletonRendererComponent::SetTextureParameterValue(FName ParameterName, UTexture* Value) {
}

void USpineSkeletonRendererComponent::SetSkinsCustomMaterialScalarParameterValue(TArray<FString>& SkinNames, FName ParameterName, float Value) {
}

void USpineSkeletonRendererComponent::SetScalarParameterValue(FName ParameterName, float Value) {
}

void USpineSkeletonRendererComponent::RemoveCustomMaterialToSkins(TArray<FString>& SkinNames) {
}

void USpineSkeletonRendererComponent::AddCustomMaterialToSkins(TArray<FString>& SkinNames, UMaterialInterface* CustomMaterial) {
}


