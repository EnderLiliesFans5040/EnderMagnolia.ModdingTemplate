#pragma once
#include "CoreMinimal.h"
#include "WidgetMapStoryEventDirectionData.generated.h"

class UUserWidgetMapIcon_StoryEvent;
class UUserWidgetZionShowHide;

USTRUCT(BlueprintType)
struct FWidgetMapStoryEventDirectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidgetMapIcon_StoryEvent> StoryEventIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidgetZionShowHide* StoryEventDirection;
    
    ZION_API FWidgetMapStoryEventDirectionData();
};

