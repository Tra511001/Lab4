#pragma once
#define ITEMTYPE_H
#include "StackType.h"
#include<iostream>
using namespace std;


class ItemType {
public:
	ItemType();
	int value;
	void Initialize(int number);
	int GetIntValue();
private:
};