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
int Max(TreeNode* root){
    if(root==NULL) return 0;
    int l=Max(root->left);
    int r=Max(root->right);
    return max(l,r)+1;
}
    int maxDepth(TreeNode* root) {
        int m=Max(root);
        return m;
    }
};
