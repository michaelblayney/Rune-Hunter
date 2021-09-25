// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUp.h"


int APowerUp::getRandPowerUp(int current) {
	int num = (int)(rand() % 3);
	while (num == current) {
		num = (int)(rand() % 3);
	}
	return num;
}
