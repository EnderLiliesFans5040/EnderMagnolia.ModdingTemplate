#include "EditorDebugComponent.h"

UEditorDebugComponent::UEditorDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
}


