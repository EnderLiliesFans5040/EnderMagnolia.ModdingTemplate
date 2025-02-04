#include "AIControllerZion.h"
#include "ZionPathFollowingComponent.h"

AAIControllerZion::AAIControllerZion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UZionPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->Faction = EFaction::Enemy;
    this->CollisionProfile = ECollisionProfile::Enemy;
    this->BlackboardData = NULL;
    this->BehaviorTree_Main = NULL;
    this->BehaviorTree_Aggression = NULL;
    this->BehaviorTree_Idle = NULL;
}

void AAIControllerZion::StopLogic() {
}

void AAIControllerZion::StartLogic() {
}

void AAIControllerZion::ResumeLogic() {
}

void AAIControllerZion::RestartLogic() {
}

void AAIControllerZion::PauseLogic() {
}

void AAIControllerZion::OnPawnDeathProcessStart() {
}

void AAIControllerZion::OnPawnDeathProcessEnd() {
}



