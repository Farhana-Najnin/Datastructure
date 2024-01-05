#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
void insert_tail(Node *&head,Node *&tail,int val )//o(1)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;

}
void insert_at_any_position(Node *head,int pos, int v)//o(n)
{
Node *newNode=new Node(v);
Node *tmp=head;
for(int i=1;i<=pos-1;i++)
    {
    tmp=tmp->next;
}
newNode->next=tmp->next;
tmp->next=newNode;
newNode->next->prev=newNode;
newNode->prev=tmp;
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
    head->prev=newNode;
    head=newNode;
}
void Reverse(Node *tail)
{Node *tmp=tail;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->prev;
}
}

int Size(Node *head){
Node *tmp=head;
int cnt=0;
while(tmp!=NULL){
    cnt++;
    tmp=tmp->next;
}
return cnt;
}

int main()
{

    Node *head=NULL;
    Node *tail=NULL;

    int q;
    cin>>q;


  while(q!=NULL)
    {
        int pos,val;
cin>>pos>>val;
if(pos>Size(head)){

    cout<<"Invalid"<<endl;

}
else if(pos==0){
insert_at_head(head,tail,val);
cout<<"L -> ";
 print_linked_list(head);
 cout<<endl;
 cout<<"R -> ";
   Reverse(tail);
   cout<<endl;

}
else if(pos==Size(head)){
    insert_tail(head,tail,val);
    cout<<"L -> ";
 print_linked_list(head);
 cout<<endl;
 cout<<"R -> ";
   Reverse(tail);
   cout<<endl;
}
else {
    insert_at_any_position(head,pos,val);
    cout<<"L -> ";
 print_linked_list(head);
 cout<<endl;
 cout<<"R -> ";
   Reverse(tail);
   cout<<endl;
}
q--;

    }


    return 0;
}



