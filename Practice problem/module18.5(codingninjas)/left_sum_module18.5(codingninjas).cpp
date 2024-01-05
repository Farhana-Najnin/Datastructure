#include <bits/stdc++.h>
/*
	Tree Node class.

	class BinaryTreeNode
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/
long long s=0;
long long sum(BinaryTreeNode<int> *root)
{
	if(root==NULL) return 0;
	if(root->left){
s=s+root->left->data;
 sum(root->left);
	}
	sum(root->right);
	return s;
}

long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	s=0;
	long long su=sum(root);
	return su;

}
