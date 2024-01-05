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
int Size(Node *head){
Node *tmp=head;
int cnt=0;
while(tmp!=NULL){
    cnt++;
    tmp=tmp->next;
}
return cnt;
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
void Check_same(Node *head,Node *head1){

}

int main()
{
Node *head=NULL;
    Node *tail=NULL;
        int val;
Node *head1=NULL;
    Node *tail1=NULL;

        int val1;
        while(true){
            cin>>val;
            if(val==-1){
                break;
            }
            insert_tail(head,tail,val);
        }
             while(true){
            cin>>val1;
            if(val1==-1){
                break;
            }
            insert_tail(head1,tail1,val1);
        }

  int cnt=0;
  int d=0;
Node *temp=head;
        Node *temp1=head1;
        if(Size(head)== Size(head1)){
if(temp!=NULL && temp1!=NULL){
    if(temp->val !=temp1->val)
 {
       cnt++;
    }
temp=temp->next;
temp1=temp1->next;
}
      if(cnt>0){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES" <<endl;
      }
        }
        else{
            cout<<"NO"<<endl;
        }
      return 0;
}
