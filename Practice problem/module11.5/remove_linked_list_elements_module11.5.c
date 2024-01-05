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

    ListNode* removeElements(ListNode* head, int val) {
     ListNode *temp=head;

     if(head==NULL) return NULL;
     while(head->val == val)
        {
            head = head->next;
            if(head==NULL)
                return head;
        }

         while(temp->next!=NULL)
        {
            while(temp->next->val == val)
            {
                temp->next = temp->next->next;
                if(temp->next==NULL)
                    break;
            }
            temp = temp->next;
            if(temp==NULL)
                break;
        }


     return head;
    }
};
