#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ENotificationTypes.h"
#include "NotificationData.h"
#include "NotificationMapAsset.generated.h"

UCLASS(Blueprintable)
class UNotificationMapAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENotificationTypes, FNotificationData> Notifications;
    
    UNotificationMapAsset();

};

