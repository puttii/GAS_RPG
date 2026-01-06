// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EnemyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEnemyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AURA_API IEnemyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;
	
	/*
	 * BlueprintNativeEvent 在 C++ 中声明并提供默认实现（需实现带 _Implementation 后缀的函数）。
	 * Blueprint 子类可以重写此事件，且可选择是否调用父类（C++）实现。
	 * BlueprintNativeEvent 与 BlueprintImplementableEvent 的区别是后者只能在 Blueprint 中实现，无 C++ 默认实现。
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCombatTarget(AActor* InCombatTarget);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AActor* GetCombatTarget() const;
};
