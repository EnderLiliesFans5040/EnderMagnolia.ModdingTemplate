#include "WorldSpaceWidgetHolder.h"
#include "Components/WidgetComponent.h"
#include "Templates/SubclassOf.h"

AWorldSpaceWidgetHolder::AWorldSpaceWidgetHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    this->WidgetComponent = (UWidgetComponent*)RootComponent;
}

AWorldSpaceWidgetHolder* AWorldSpaceWidgetHolder::CreateWorldSpaceWidgetHolder(const UObject* WorldObjectContext, const TSubclassOf<UUserWidgetWorldSpace>& UserWidgetWorldSpaceClass, TEnumAsByte<EWidgetReleaseMode> ReleaseMode) {
    return NULL;
}


