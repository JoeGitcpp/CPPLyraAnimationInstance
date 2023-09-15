// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CppAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class D_API UCppAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	// Update the animation state based on elapsed time
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	// Thread-safe version of NativeUpdateAnimation
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

	// Perform post-evaluation actions on the animation
	virtual void NativePostEvaluateAnimation() override;
	
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe),Category = "Animation")
	void UpdateVelocityData();

	// The local velocity of the animated character
	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, Category = "Example")
	FVector	LocalVelocity;

	// The local velocity of the animated character
	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, Category = "Example")
	FVector	WorldVelocity;


	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, Category = "Example")
	bool  HasVelocity;

private:

};
