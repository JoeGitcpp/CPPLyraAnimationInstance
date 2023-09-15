// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/CppAnimInstance.h"
#include <GameFramework/CharacterMovementComponent.h>//我不确定这个头文件是不是正确的操作，只是按照系统提示添加的

void UCppAnimInstance::NativeUpdateAnimation(float _DeltaSeconds)
{
	// 
	Super::NativeUpdateAnimation(_DeltaSeconds);

}

void UCppAnimInstance::NativeThreadSafeUpdateAnimation(float _DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(_DeltaSeconds);

	UpdateVelocityData();
}

void UCppAnimInstance::NativePostEvaluateAnimation()
{
	Super::NativePostEvaluateAnimation();
}

void UCppAnimInstance::UpdateVelocityData()
{

}
