// Fill out your copyright notice in the Description page of Project Settings.


#include "EndGameWidget.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"


void UEndGameWidget::NativeConstruct()
{
	BT_1->OnClicked.AddDynamic(this, &UEndGameWidget::OnButtonClicked);
}

void UEndGameWidget::OnButtonClicked()
{
	TB_1->SetText(FText::FromString(TEXT("The END ...")));
}
