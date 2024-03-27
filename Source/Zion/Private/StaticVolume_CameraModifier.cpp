#include "StaticVolume_CameraModifier.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AStaticVolume_CameraModifier::AStaticVolume_CameraModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ActivationType = ECameraModifierActivationType::ActivationBox;
    this->Priority = 0;
    this->BlendTimeIn = 1.00f;
    this->BlendTimeOut = 1.00f;
    this->bHasOverrideSettings = false;
    this->bHasCameraClamp = false;
    this->CameraClampLocations.AddDefaulted(4);
    this->bHasBlocker = false;
    this->bIsBlockerUp_Active = true;
    this->bIsBlockerDown_Active = true;
    this->bIsBlockerLeft_Active = true;
    this->bIsBlockerRight_Active = true;
    this->BlockerSize = 50.00f;
    this->WallFX = NULL;
    this->bHasFixedCamera = false;
    this->FixedCameraMatch = EFixedCameraMatch::Width;
    this->FixedCameraType = EFixedCameraType::FixedFOV;
    this->bHasBlackBorders = false;
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->ActivationBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivationBoxComponent"));
    this->ClampComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ClampComponent"));
    this->Blocker_Up = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Up"));
    this->Blocker_Down = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Down"));
    this->Blocker_Left = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Left"));
    this->Blocker_Right = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Right"));
    this->CameraOverrideModule_FOV = NULL;
    this->CameraOverrideModule_ZoomOffset = NULL;
    this->ActivationBoxComponent->SetupAttachment(RootComponent);
    this->ClampComponent->SetupAttachment(RootComponent);
    this->Blocker_Up->SetupAttachment(ClampComponent);
    this->Blocker_Down->SetupAttachment(ClampComponent);
    this->Blocker_Left->SetupAttachment(ClampComponent);
    this->Blocker_Right->SetupAttachment(ClampComponent);
}

void AStaticVolume_CameraModifier::OnActivationEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AStaticVolume_CameraModifier::OnActivationBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AStaticVolume_CameraModifier::IsActive() const {
    return false;
}

void AStaticVolume_CameraModifier::Deactivate() {
}

void AStaticVolume_CameraModifier::Activate() {
}


