
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        int s=size(head,cnt);
        int k=s-n;
        ListNode*tmp=head;
        if(s==1){
            head=NULL;
        }
        else if(s==n){
            head=head->next;
        }
        else if(n==1){
            for(int i=1;i<k;i++){
            tmp=tmp->next;
        }
        tmp->next=NULL;
        }
        else{
        for(int i=1;i<k;i++){
            tmp=tmp->next;
        }

        tmp->next=tmp->next->next;
        }
        return head;
    }
};
