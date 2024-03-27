#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RestPointListData.h"
#include "UserWidgetZion.h"
#include "UserWidgetRestPointList.generated.h"

class UUserWidgetMapIcon_RestPoint;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetRestPointList : public UUserWidgetZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRestPointListData> RestPointListData;
    
public:
    UUserWidgetRestPointList();

protected:
    UFUNCTION(BlueprintCallable)
    int32 SetCurrentMapAreaIndex(int32 NewMapAreaIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void Open(const FVector2D& CurrentMapPosition);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpened() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InstantiateRestPointList(const TArray<FRestPointListData>& ListData);
    
    UFUNCTION(BlueprintCallable)
    void GoToPreviousMapArea();
    
    UFUNCTION(BlueprintCallable)
    void GoToNextMapArea();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToMapAreaFromIndex(int32 MapAreaIndex, UUserWidgetMapIcon_RestPoint* NearestRestPointIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewMapAreaIndex(int32 IndexOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexFromMapAreaName(const FName& MapAreaName) const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidgetMapIcon_RestPoint* FindNearestRestPointIcon(const FVector2D& CurrentMapPosition, int32& OutMapAreaIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidgetMapIcon_RestPoint* ChangeMapArea(int32 IndexOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeMapArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeOpened() const;
    
};

