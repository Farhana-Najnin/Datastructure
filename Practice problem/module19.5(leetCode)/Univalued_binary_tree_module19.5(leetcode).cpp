/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool compare(TreeNode* root,int v){
        if(root==NULL) return true;
        if(root->val!=v) return false;
        bool l=compare(root->left,v);
         bool r=compare(root->right,v);
         if(l&&r) return true;
         else return false;

    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return true;
        bool c=compare(root,root->val);
        return c;
    }
};
