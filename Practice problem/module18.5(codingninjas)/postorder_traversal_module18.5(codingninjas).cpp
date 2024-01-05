#include <bits/stdc++.h>
/*
Following is the structure of Tree Node

class TreeNode
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
vector<int>v;
void post(TreeNode* root){
if(root==NULL) return;
    post(root->left);
    post(root->right);
    v.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root)
{
    // Write your code here
    v.clear();
    post(root);
    return v;

}

