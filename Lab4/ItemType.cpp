#include"ItemType.h"
using namespace std;

ItemType::ItemType() {

	value = 0;
}
void ItemType::Initialize(int num) {
	value = num;
}

int ItemType::GetIntValue() {
	return value;
}