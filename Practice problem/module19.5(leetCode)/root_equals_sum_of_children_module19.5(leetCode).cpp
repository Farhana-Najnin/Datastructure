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
int s=0;
int Sum(TreeNode* root){
    s=root->left->val+root->right->val;
    return s;

}
    bool checkTree(TreeNode* root) {
        int s=0;
        int sum=Sum(root);
        if(root->val==sum) return true;
        else
        return false;
    }
};
