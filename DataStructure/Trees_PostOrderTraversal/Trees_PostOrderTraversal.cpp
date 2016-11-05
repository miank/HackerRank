// Trees_PostOrderTraversal.cpp : Complete the postOrder function in your editor below, 
// which has  parameter: a pointer to the root of a binary tree. It must print the values in the tree's postorder traversal as a single line of space-separated values.
//

#include "stdafx.h"

struct node
{
	int data;
	node* left;
	node* right;
};

*/


void postOrder(node *root) {
	if (root != nullptr)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << " ";
	}
}

int main()
{
    return 0;
}

