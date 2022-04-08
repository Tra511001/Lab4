#pragma once
#include<iostream>
#include<iomanip>
using namespace std;
struct Node{
	int data;
	Node* next;

};
class FullStack {};

class StackType{
public:
	StackType();
	int Top();
	bool isFull();
	bool isEmpty();
	void Push(int newItem);
	void Pop();
	void insertAtBottom(int x);
	void reverse();
	int size;
private:
	Node* nextUpPtr;
}
