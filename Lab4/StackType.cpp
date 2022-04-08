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
//Post::parameter x(the first item) is now the last item
void StackType::insertAtBottom(int x) {
	if (isEmpty())
		Push(x);
	else {
		int a = Top();
		Pop();
		insertAtBottom(x);
		Push(a);
	}
}

//Pre:: there must be items in the stack
//Post:: runs until stack is empty, temporary variable x holds the top value and insertAtBottom() 
//inserts it at the bottom
void StackType::reverse() {
	if (!isEmpty()) {
		int x = Top();
		Pop();
		reverse();
		insertAtBottom(x);
	}

}
