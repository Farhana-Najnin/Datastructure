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
int f1[10002]={0};
int f2[10002]={0};
void pre(TreeNode* root){
    if(root==NULL) return ;
    if(root->val>=0) f1[root->val]++;
    else
    f2[-root->val]++;
    pre(root->left);
    pre(root->right);
}
bool check(TreeNode* root, int k){
    if(root==NULL) return false;
    int r=k-root->val;
    if(r>=0&&r<=10002&& r!=root->val){
        if(f1[r]>0) return true;
    }
    else if(r<0&&r<=10002&&r!=root->val){
        if(f2[-r]>0) return true;
    }

    bool l1=check(root->left,k);
    bool r1=check(root->right,k);
return l1||r1;

}
    bool findTarget(TreeNode* root, int k) {
        pre(root);
        return check(root,k);
         }
};
