#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
   int val;
   Node *next;
   Node *prev;
   Node(int val){
   this->val=val;
   this->next=NULL;
   this->prev=NULL;
       }
};
void print_normal(Node *head){
Node *tmp=head;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
}
cout<<endl;
}
void print_reverse(Node *tail){
Node *tmp=tail;
while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->prev;
}
cout<<endl;
}
void delete_head(Node *&head,Node *&tail){
Node *deleteNode=head;
head=head=head->next;
delete deleteNode;
if(head==NULL){
    tail=NULL;
    return;
}
head->prev=NULL;
}
void delete_tail(Node *&head,Node *&tail){
Node *deleteNode=tail;
tail=tail->prev;
delete deleteNode;
if(tail==NULL){
    head=NULL;
    return;
}

tail->next=NULL;
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
Node *b=new Node(30);
Node *c=new Node(40);
Node *tail=c;
    int val;
head->next=a;
a->prev=head;
a->next=b;
b->prev=a;
b->next=c;
c->prev=b;
cin>>val;


delete_tail(head,tail);
delete_head(head,tail);

print_normal(head);
print_reverse(tail);
}
