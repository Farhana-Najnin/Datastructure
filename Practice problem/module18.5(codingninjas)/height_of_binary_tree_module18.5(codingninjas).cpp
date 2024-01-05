#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int max1(TreeNode<int> *root){
if(root==NULL) return 0;
    int l=max1(root->left);
    int r=max1(root->right);
    int m=max(l,r)+1;
    return m;
}
int maxDepth(TreeNode<int> *root) {
    // Write your code here.
    int n=max1(root);
    return n-1;

}
