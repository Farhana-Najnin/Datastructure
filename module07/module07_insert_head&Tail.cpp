#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
   int val;
   Node *next;
   Node(int val){
   this->val=val;
   this->next=NULL;
       }
};
//head &tail dia
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
void insert_at_any_position(Node *head,int pos, int v)//o(n)
{
Node *newNode=new Node(v);
Node *tmp=head;
for(int i=1;i<=pos-1;i++)
    {
    tmp=tmp->next;
}
//newnode insert korlm
newNode->next=tmp->next;
tmp->next=newNode;
cout<<endl<<endl<<"Inserted a position "<<pos<<endl<<endl;
}
void print_linked_list(Node *head)//o(n)
{
    cout<<endl;
    cout<<"print linked list: ";
Node *temp=head;
while(temp!=NULL){
    cout<<temp->val<<endl;
    temp=temp->next;
}
}
void insert_at_head(Node* &head, int v){
Node *newNode=new Node(v);
newNode->next=head;
head=newNode;
cout<<endl<<"Inserted at head"<<endl<<endl;
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
int main(){
Node *head=new Node(10);
Node *a=new Node(20);
Node *b=new Node (30);
Node *c=new Node (40);
Node *d=new Node (50);
head->next=a;
a->next=b;
b->next=c;
c->next=d;
Node *tail=d;
print_linked_list(head);

int pos,val;
cin>>pos>>val;
if(pos>Size(head)){

    cout<<"INvalid Index"<<endl;
}
else if(pos==0){
insert_at_head(head,val);

}
else if(pos==Size(head)){
    insert_tail(head,tail,val);
}
else {
    insert_at_any_position(head,pos,val);
}
print_linked_list(head);
cout<<"tail-> "<<tail->val<<endl;
return 0;
}

