#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnFieldTalkFinishedDelegate.h"
#include "FieldTalkComponent.generated.h"

class UFieldTalkAsset;

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class UFieldTalkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFieldTalkFinished OnFieldTalkFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFieldTalkAsset* CachedFieldTalkAsset;
    
public:
    UFieldTalkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartFieldTalk(UFieldTalkAsset* FieldTalkAsset, bool bSkipActiveFieldTalkAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowFieldTalkEntry();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnDeath();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartFieldTalk() const;
    
};

