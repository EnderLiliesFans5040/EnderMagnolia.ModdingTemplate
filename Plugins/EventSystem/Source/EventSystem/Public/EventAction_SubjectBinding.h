#pragma once
#include "CoreMinimal.h"
#include "ActorBindingKey.h"
#include "EventAction.h"
#include "EventAction_SubjectBinding.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class EVENTSYSTEM_API UEventAction_SubjectBinding : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBindingKey SubjectBinding;
    
public:
    UEventAction_SubjectBinding();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSubjectName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSubject() const;
    
};

