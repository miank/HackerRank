// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
Print elements of a linked list on console
head pointer input could be NULL as well for empty list
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
void Print(Node *head)
{
	// This is a "method-only" submission. 
	// You only need to complete this method. 
	while (head != NULL) {
		cout << head->data << endl;
		head = head->next;
	}
}


/*
Insert Node at the end of a linked list
head pointer input could be NULL as well for empty list
Node is defined as
struct Node
{
int data;
struct Node *next;
}
*/
Node* Insert(Node *head, int data)
{
	// Complete this method  
	Node *newNode = new Node;
	Node *p;
	newNode->data = data;
	newNode->next = nullptr;

	if (head == nullptr) {
		head = newNode->next;
		return newNode;
	}

	p = head;
	while (p->next != nullptr) {
		p = p->next;
	}
	p->next = newNode;
	newNode->next = nullptr;
	return head;
}


int main()
{
    return 0;
}

