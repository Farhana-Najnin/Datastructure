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
    int t=0;
    int tilt(TreeNode* root){

        if(root==NULL) return 0;

        int l=tilt(root->left);
        int r=tilt(root->right);
        t+=abs(l-r);
        return l+r+root->val;

    }
    int findTilt(TreeNode* root) {

        tilt(root);
        return t;
    }
};
