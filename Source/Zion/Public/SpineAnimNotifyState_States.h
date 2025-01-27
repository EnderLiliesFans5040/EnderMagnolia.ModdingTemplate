#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "SpineAnimNotifyState_States.generated.h"

class UState;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USpineAnimNotifyState_States : public USpineAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> States;
    
public:
    USpineAnimNotifyState_States();

};

