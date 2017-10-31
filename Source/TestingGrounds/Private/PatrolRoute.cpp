// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/PatrolRoute.h"


// Sets default values for this component's properties
UPatrolRoute::UPatrolRoute()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPatrolRoute::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPatrolRoute::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

//	auto AIController = GetOwner();
//	auto ControlledPawn = Cast<APawn>(AIController);
//	auto PatrollingGuard = ControlledPawn;
//	ControlledPawn->

//	auto BlackboardComp = OwnerComp.GetBlackboardComponent();
//	auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
//	UE_LOG(LogTemp, Warning, TEXT("Waypoint index: %i"), Index);
//	BlackboardComp->SetValueAsObject(WaypointKey.SelectedKeyName, PatrolPoints[Index]);
//	auto NextIndex = (Index + 1) % PatrolPoints.Num();
//	BlackboardComp->SetValueAsInt(IndexKey.SelectedKeyName, NextIndex);
}

