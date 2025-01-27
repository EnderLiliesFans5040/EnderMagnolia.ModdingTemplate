#pragma once
#include "CoreMinimal.h"
#include "RestPointListEntryFocusedDelegateDelegate.h"
#include "RestPointListEntryPressedDelegateDelegate.h"
#include "UserWidgetZion.h"
#include "UserWidgetRestPointListEntry.generated.h"

class UUserWidgetMapIcon_RestPoint;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetRestPointListEntry : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestPointListEntryFocusedDelegate OnFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestPointListEntryPressedDelegate OnPressed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidgetMapIcon_RestPoint> CachedRestPointIcon;
    
public:
    UUserWidgetRestPointListEntry();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestPointIcon(UUserWidgetMapIcon_RestPoint* RestPointIcon) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeEntry(UUserWidgetMapIcon_RestPoint* RestPointIcon);
    
};

