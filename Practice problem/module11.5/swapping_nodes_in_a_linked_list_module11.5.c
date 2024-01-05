/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
int size(ListNode* root,int cnt){

    if(root==NULL) return 0;
    ListNode*tmp=root;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}

    ListNode* swapNodes(ListNode* head, int k) {
        int cnt=0;
        int s=size(head,cnt);
        int v=s-k+1;
        ListNode*tmp1=head;
        ListNode*tmp2=head;
        for(int i=1;i<k;i++){
            tmp1=tmp1->next;
        }
        for(int j=1;j<v;j++){
            tmp2=tmp2->next;
        }
        int f1=tmp1->val;
        int f2=tmp2->val;
        tmp1->val=f2;
        tmp2->val=f1;
        return head;

    }
};
