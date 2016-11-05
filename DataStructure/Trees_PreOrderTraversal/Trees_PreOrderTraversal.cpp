// Trees.cpp : PreOrder Traversal 
// Complete the preOrder function in your editor below, which has  parameter: a pointer to the root of a binary tree. 
// It must print the values in the tree's preorder traversal as a single line of space-separated values.

#include "stdafx.h"
#include <iostream>
using namespace std;

/* you only have to complete the function given below.
Node is defined as

struct node
{
int data;
node* left;
node* right;
};

*/

void preOrder(node *root) {

	if (root != nullptr)
	{
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

int main()
{
	return 0;
}

