#include "SpineMeshCopyComponent.h"

USpineMeshCopyComponent::USpineMeshCopyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialOverride = NULL;
    this->TextureParameterName = TEXT("SpriteTexture");
    this->bAutoCopy = true;
    this->CachedMaster = NULL;
}

void USpineMeshCopyComponent::Copy() {
}


