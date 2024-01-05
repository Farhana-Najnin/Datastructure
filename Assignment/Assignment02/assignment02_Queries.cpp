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
    cout<<endl;
    cout<<"print linked list: ";
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
void insert_tail(Node *&head,Node *&tail,int val )//o(1)
{
     Node *newNode=new Node(val);
     if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
     }
     tail->next=newNode;
     tail=newNode;

}
void insert_at_head(Node* &head, Node *&tail,int v)
{

    Node *newNode=new Node(v);
    if(head==NULL){
         head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
int Size(Node *head)
{
    Node *tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
int main()
{
    int q;
    cin>>q;
    Node *head=NULL;
    Node *tail=NULL;

    for(int i=0; i<q; i++)
    {

        int q1;
        cin>>q1;
        if(q1==1)
        {

            int v;
            cin>>v;
            insert_tail(head,tail,v);
        }
        else
        {
            int v;

            cin>>v;
            insert_at_head(head,tail,v);

        }
      //  print_linked_list(head);
        cout<<head->val<<" "<<tail->val<<endl;
       //cout<<head->val<<" ";

       /* Node *tmp=head;
        while(tmp->next!=NULL)
        {
            tmp=tmp->next;
        }

        cout<<tmp->val<<endl;*/
    }


    return 0;
}

