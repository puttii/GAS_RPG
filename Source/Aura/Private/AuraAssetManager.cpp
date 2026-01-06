// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraAssetManager.h"
#include "AuraGameplayTags.h"
#include "AbilitySystemGlobals.h"

UAuraAssetManager& UAuraAssetManager::Get()
{
	check(GEngine);
	UAuraAssetManager* AuraAssetManager = Cast<UAuraAssetManager>(GEngine->AssetManager);
	return *AuraAssetManager;
}

void UAuraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	// 此处可以用来调用 FAuraGameplayTags::InitializeNativeGameplayTags()
	FAuraGameplayTags::InitializeNativeGameplayTags();
	// 如果需要使用 TargetData, 则需要调用该函数进行初始化。UE5.3+后自动调用。
	UAbilitySystemGlobals::Get().InitGlobalData();
}
