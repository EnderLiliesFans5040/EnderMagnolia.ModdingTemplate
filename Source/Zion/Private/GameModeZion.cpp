#include "GameModeZion.h"
#include "ClearManagerComponent.h"
#include "DifficultySystemComponent.h"
#include "DropSystemComponent.h"
#include "ElevatorStateManagerComponent.h"
#include "EmulatedFogManagerComponent.h"
#include "GameStatsComponent.h"
#include "PoolSystemComponent.h"
#include "RenderStateManagerComponent.h"
#include "TimeManagerComponent.h"
#include "ZoneSystemComponent.h"

AGameModeZion::AGameModeZion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StepMatrixData = NULL;
    this->AbilityFXMatrixData = NULL;
    this->AbilitySEMatrixData = NULL;
    this->GameStatsComponent = CreateDefaultSubobject<UGameStatsComponent>(TEXT("GameStats"));
    this->EmulatedFogManager = CreateDefaultSubobject<UEmulatedFogManagerComponent>(TEXT("EmulatedFogManager"));
    this->TimeManager = CreateDefaultSubobject<UTimeManagerComponent>(TEXT("TimeManager"));
    this->PoolSystemComponent = CreateDefaultSubobject<UPoolSystemComponent>(TEXT("PoolSystem"));
    this->DropSystemComponent = CreateDefaultSubobject<UDropSystemComponent>(TEXT("DropSystem"));
    this->ZoneSystemComponent = CreateDefaultSubobject<UZoneSystemComponent>(TEXT("ZoneSystem"));
    this->ClearManagerComponent = CreateDefaultSubobject<UClearManagerComponent>(TEXT("ClearManager"));
    this->RenderStateManagerComponent = CreateDefaultSubobject<URenderStateManagerComponent>(TEXT("RenderStateManager"));
    this->DifficultySystemComponent = CreateDefaultSubobject<UDifficultySystemComponent>(TEXT("DifficultySystem"));
    this->ElevatorStateManagerComponent = CreateDefaultSubobject<UElevatorStateManagerComponent>(TEXT("ElevatorStateManager"));
    this->BossRushComponent = NULL;
    this->EnvironmentLevel = 1;
    this->StoryLevel = 1;
}

void AGameModeZion::StartRecollectionBossRush() {
}

void AGameModeZion::StartRecollectionBoss(const FDataTableRowHandle& RecollectionBossDataHandle) {
}

void AGameModeZion::RespawnPlayer(ERespawnReason Reason) {
}

void AGameModeZion::RegisterBossRushComponent(URecollectionBossRushComponent* NewBossRushComponent) {
}

void AGameModeZion::NotifyRecollectionBossDead() {
}

bool AGameModeZion::IsGameReady() const {
    return false;
}

bool AGameModeZion::IsDeathProcessingAllowed() const {
    return false;
}

int32 AGameModeZion::GetStoryLevel() const {
    return 0;
}

UStepMatrixData* AGameModeZion::GetStepMatrixData() const {
    return NULL;
}

int32 AGameModeZion::GetRawEnvironmentLevel() const {
    return 0;
}

FString AGameModeZion::GetPlayTimeAsString() const {
    return TEXT("");
}

float AGameModeZion::GetPlayTime() const {
    return 0.0f;
}

int32 AGameModeZion::GetEnvironmentLevel() const {
    return 0;
}

UDataTable* AGameModeZion::GetDataTableStoryLevels() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableRestPoints() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableRestPointEvents() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableRecollectionBosses() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemTutorials() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemTips() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemStats() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemSpirits() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemSkills() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemPassives() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemNPCInfo() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemMaterials() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemKeys() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemEquipments() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemEnemyInfo() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemCurrencies() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemCostumes() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemAssists() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableItemAptitudes() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableGameMapTransitions() const {
    return NULL;
}

UDataTable* AGameModeZion::GetDataTableGameMaps() const {
    return NULL;
}

ERespawnReason AGameModeZion::GetCurrentRespawnReason() const {
    return ERespawnReason::None;
}

UMaterialSEMatrixData* AGameModeZion::GetAbilitySEMatrixData() const {
    return NULL;
}

UMaterialFXMatrixData* AGameModeZion::GetAbilityFXMatrixData() const {
    return NULL;
}

AGameModeZion* AGameModeZion::Get(const UObject* WorldContextObject) {
    return NULL;
}

void AGameModeZion::FastTravel(const FName& RestPointID) {
}


