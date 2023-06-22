// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EndGameWidget.generated.h"

/**
 * 
 */
UCLASS()
class GJ_API UEndGameWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;

public:
	UFUNCTION()
		void OnButtonClicked(); // BT_SignIn ��ư Ŭ�� �̺�Ʈ �ڵ鷯 �Լ�

		UPROPERTY(meta = (BindWidget))
		class UTextBlock* TB_1;
		UPROPERTY(meta = (BindWidget))
			class UButton* BT_1;

		float time;
};
