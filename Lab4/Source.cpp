#include "StackType.h"
#include "ItemType.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	StackType stack1;
	ItemType item1;
	ItemType item2;
	ItemType item3;
	item1.Initialize(1);
	item2.Initialize(2);
	item3.Initialize(3);

	stack1.Push(item1.value);
	stack1.Push(item2.value);
	stack1.Push(item3.value);
	cout << stack1.Top() << endl;

	stack1.reverse();
	cout << stack1.Top();
	
	return 1;
}
