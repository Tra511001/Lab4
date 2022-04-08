#include "StackType.h"

StackType::StackType() {
	nextUpPtr = NULL;
}
int StackType::Top() {
	return nextUpPtr->data;
}
bool StackType::isEmpty() {
	if (nextUpPtr == NULL) {
		return true;
	}
	else
		return false;

}
bool StackType::isFull() {
	Node* location;
	try {
		location = new Node;
		delete location;
		return false;
	}
	catch (std::bad_alloc exception) {
		return true;
	}
}
void StackType::Push(int newItem) {
	Node* temp= new Node;
	if (!temp) {
		throw FullStack();
	}
	else {
		temp->data = newItem;
		temp->next = nextUpPtr;
		nextUpPtr = temp;
	}
}
void StackType::Pop() {
	if (nextUpPtr == NULL) {
		cout << "Stack Empty";
	}
	else {
		Node* temp = new Node;
		temp = nextUpPtr;
		nextUpPtr = nextUpPtr->next;
		delete temp;
	}
}