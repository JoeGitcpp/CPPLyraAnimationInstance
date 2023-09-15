// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/CppAnimInstance.h"
#include <GameFramework/CharacterMovementComponent.h>//�Ҳ�ȷ�����ͷ�ļ��ǲ�����ȷ�Ĳ�����ֻ�ǰ���ϵͳ��ʾ��ӵ�

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
