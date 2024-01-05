#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int>v;
    if(root==NULL) return v;
    queue<BinaryTreeNode<int> *>q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int> *f=q.front();
        q.pop();
        v.push_back(f->val);
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
return v;
}
