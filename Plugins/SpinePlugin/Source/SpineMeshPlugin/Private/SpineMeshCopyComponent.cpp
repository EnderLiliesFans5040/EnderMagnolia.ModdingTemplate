#include "SpineMeshCopyComponent.h"

USpineMeshCopyComponent::USpineMeshCopyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialOverride = NULL;
    this->TextureParameterName = TEXT("SpriteTexture");
    this->bAutoCopy = true;
}

void USpineMeshCopyComponent::Copy() {
}


