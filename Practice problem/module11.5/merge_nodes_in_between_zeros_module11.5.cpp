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
void insert_at_tail(ListNode* &head, ListNode* &tail, int val)
    {
        ListNode* newnode = new ListNode(val);
        if(head==NULL)
        {
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }



    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        int sum = 0;
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;
        while(temp->next!=NULL)
        {
            sum+=temp->val;
            if(temp->next->val == 0)
            {
                insert_at_tail(newhead,newtail,sum);
                sum = 0;
            }
            temp = temp->next;
            if(temp == NULL)
                break;
        }
        return newhead;
    }
};
