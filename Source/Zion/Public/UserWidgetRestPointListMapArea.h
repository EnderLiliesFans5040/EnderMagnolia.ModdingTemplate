#pragma once
#include "CoreMinimal.h"
#include "MapRestPointData.h"
#include "RestPointListMapAreaEntryFocusedDelegateDelegate.h"
#include "RestPointListMapAreaEntryPressedDelegateDelegate.h"
#include "UserWidgetZion.h"
#include "UserWidgetRestPointListMapArea.generated.h"

class UUserWidgetMapIcon_RestPoint;
class UUserWidgetRestPointListEntry;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetRestPointListMapArea : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestPointListMapAreaEntryFocusedDelegate OnEntryFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestPointListMapAreaEntryPressedDelegate OnEntryPressed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidgetMapIcon_RestPoint> CachedRestPointIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* EntriesHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetRestPointListEntry> RestPointListEntrySoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MapAreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapAreaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
public:
    UUserWidgetRestPointListMapArea();

    UFUNCTION(BlueprintCallable)
    void SetMapAreaName(const FText& NewMapAreaName);
    
    UFUNCTION(BlueprintCallable)
    void SetMapAreaIndex(const int32 NewMapAreaIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCompleted(bool bIsCompleted);
    
private:
    UFUNCTION(BlueprintCallable)
    void RestPointEntryPressed(FMapRestPointData RestPointData);
    
    UFUNCTION(BlueprintCallable)
    void RestPointEntryFocused(UUserWidgetMapIcon_RestPoint* RestPointIcon);
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateRestPointListEntries(TArray<UUserWidgetMapIcon_RestPoint*> RestPointIcons);
    
};

