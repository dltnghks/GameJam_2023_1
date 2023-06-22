// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "HUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class GJ_API UHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public :
	void ChangeGoal();
	void ChangeRemainValue(int changeValue);
	void ChangeAllValue(int changeValue);

public:
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_Goal;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RemainValue;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* AllValue;

	int allValue;
	int remainValue;
};
