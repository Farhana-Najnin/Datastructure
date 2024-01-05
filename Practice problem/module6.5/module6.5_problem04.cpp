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

Node *temp=head;
while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
}
cout<<endl;
}
int CountLength(Node *&head){
int cnt=0;
Node *tmp=head;
while(tmp!=NULL){
      cnt++;
      tmp=tmp->next;
      }
      return cnt;
}
void insert_at_any_position(Node *head,int pos, int v){
Node *newNode=new Node(v);
Node *tmp=head;
for(int i=1;i<=pos-1;i++)
    {
    tmp=tmp->next;
    if(tmp==NULL){
        cout<<endl<<"INVALID INDEX"<<endl;
        return;
    }
}

newNode->next=tmp->next;
tmp->next=newNode;
}
void insert_at_head(Node* &head, int v){
Node *newNode=new Node(v);
newNode->next=head;
head=newNode;

}
int main()
{
Node *head=NULL;
    Node *tail=NULL;
        int val;
        while(true){
            cin>>val;
            if(val==-1){
                break;
            }
            insert_at_tail(head,val);
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int pos,val;
            cin>>pos>>val;
            int sz=CountLength(head);
            if(pos>sz){
                cout<<"INVALID"<<endl;
            }
            else if(pos==0){
                    insert_at_head(head,val);
                       print_linked_list(head);
            }
            else if(pos==sz){
                insert_at_tail(head,val);
                   print_linked_list(head);
            }
            else{
                insert_at_any_position(head,pos,val);
                   print_linked_list(head);
            }

        }
}
