#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SpineSkeletonComponent.generated.h"

class USpineAtlasAsset;
class USpineSkeletonDataAsset;
class USpineSkeletonRendererComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEPLUGIN_API USpineSkeletonComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpineAtlasAsset* Atlas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpineSkeletonDataAsset* SkeletonData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonRendererComponent* RendererComponent;
    
public:
    USpineSkeletonComponent(/*const FObjectInitializer& ObjectInitializer*/);

    UFUNCTION(BlueprintCallable)
    void UpdateWorldTransform();
    
    UFUNCTION(BlueprintCallable)
    void SetToSetupPose();
    
    UFUNCTION(BlueprintCallable)
    void SetSlotsToSetupPose();
    
    UFUNCTION(BlueprintCallable)
    void SetSlotColor(const FString& SlotName, const FColor Color);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkins(UPARAM(Ref) TArray<FString>& SkinNames);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkin(const FString& SkinName);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleY(float ScaleY);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleX(float ScaleX);
    
    UFUNCTION(BlueprintCallable)
    void SetIKConstraintsMix(const FString& IKConstraintBaseName, float Mix);
    
    UFUNCTION(BlueprintCallable)
    void SetIKConstraintMix(const FString& IKConstraintName, float Mix);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneWorldRotation(const FName& BoneName, const FQuat& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneWorldPosition(const FName& BoneName, const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    void SetBonesToSetupPose();
    
    UFUNCTION(BlueprintCallable)
    bool SetAttachment(const FString& SlotName, const FString& attachmentName);
    
    UFUNCTION(BlueprintCallable)
    bool HasSlot(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    bool HasSkin(const FString& SkinName);
    
    UFUNCTION(BlueprintCallable)
    bool HasBone(const FString& BoneName);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnimation(const FString& AnimationName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlots(TArray<FString>& Slots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkins(TArray<FString>& Skins);
    
    UFUNCTION(BlueprintCallable)
    float GetScaleY();
    
    UFUNCTION(BlueprintCallable)
    float GetScaleX();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetRootMotionDelta(int32 RootMotionID);
    
    UFUNCTION(BlueprintCallable)
    float GetIKConstraintMix(const FString& IKConstraintName);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetBoneWorldTransform(const FName& BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBones(TArray<FString>& Bones);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnimations(TArray<FString>& Animations);
    
    UFUNCTION(BlueprintCallable)
    float getAnimationDuration(const FString& AnimationName);
    
};

