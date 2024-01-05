#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};


void print_linked_list(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void insert_at_tail(Node *&head,int v)
{
    Node *newNode=new Node(v);
    Node *tmp=head;
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }

    tmp->next=newNode;

}
Node *deleteDuplicate(Node *head)
{
    if(head==NULL)
    {
        return head;
    }
    Node *tmp=head;
    while(tmp->next!=NULL)
    {
        if(tmp->val==tmp->next->val)
        {
            tmp->next=tmp->next->next;
        }
        if(tmp->next==NULL) break;
        else if(tmp->val!=tmp->next->val)
        {

            tmp=tmp->next;
        }
    }
    return head;
}

int main()
{
    list<int>mylist;
    int val;

    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        mylist.push_back(val);
    }
    mylist.sort();
    mylist.unique();
for(auto it=mylist.begin();it!=mylist.end();it++){
    cout<<*it<<" ";
}
    return 0;
}



