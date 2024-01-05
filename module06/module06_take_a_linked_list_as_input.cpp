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
void insert_at_tail(Node *&head,int v)
{
     Node *newNode=new Node(v);
     Node *tmp=head;
     if(head==NULL){

     head=newNode;
     return;
     }
     while(tmp->next!=NULL)
        {
        tmp=tmp->next;
     }
     tmp->next=newNode;

}
void print_linked_list(Node *head){
    cout<<endl;
    cout<<"print linked list: ";
Node *temp=head;
while(temp!=NULL){
    cout<<temp->val<<endl;
    temp=temp->next;
}
}



int main()
{
int val;
Node * head=NULL;
while(true)
    {
    cin>>val;
    if(val==-1) break;//-1 paile break hobe
insert_at_tail(head,val);
}
print_linked_list(head);
    return 0;


}






