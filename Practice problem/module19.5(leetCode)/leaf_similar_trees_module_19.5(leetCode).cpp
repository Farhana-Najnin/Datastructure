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

void leaf(TreeNode* root1,vector<int> &v){

    if(root1==NULL) return ;
    if(root1->left==NULL&&root1->right==NULL){
        v.push_back(root1->val);
    }

       leaf(root1->left,v);
       leaf(root1->right,v);


}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int>v1;
        vector<int>v2;
        leaf(root1,v1);
        leaf(root2,v2);

        if(v1==v2) return true;
        else return false;


    }
};
