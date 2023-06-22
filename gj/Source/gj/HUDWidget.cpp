// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDWidget.h"



void UHUDWidget::ChangeGoal()
{
	TB_Goal->SetText(FText::FromString(TEXT("Make a vaccine")));
}

void UHUDWidget::ChangeRemainValue(int changeValue)
{
	remainValue = changeValue;
	RemainValue->SetText(FText::FromString(FString::FromInt(remainValue)));

	if (remainValue == 0) {
		ChangeGoal();
	}
}

void UHUDWidget::ChangeAllValue(int changeValue)
{
	allValue = changeValue;
	AllValue->SetText(FText::FromString(FString::FromInt(allValue)));
}
