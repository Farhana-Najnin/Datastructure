#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node *next;
    Node(int val){
    this->val=val;
    this->next=NULL;
    }

};
/*void insert_tail(Node *&head,Node *&tail, int val)
{
Node *newNode =new Node(val);
if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
}
tail->next=newNode;
tail=newNode;
}*/
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


int main(){
    int cnt=0;
Node *head=NULL;
Node *tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_tail(head,tail,val);
    }
    print_linked_list(head);
    for(Node *i=head;i->next!=NULL;i=i->next){
        for(Node*j=i->next;j!=NULL;j=j->next){
            if(i->val > j->val){
                swap(i->val,j->val);
            }
        }
    }
    for(Node *i=head;i->next!=NULL;i=i->next){
        for(Node*j=i->next;j!=NULL;j=j->next){
            if(i->val == j->val){
               cnt++;
            }
        }
    }
    print_linked_list(head);
    cout<<cnt<<endl;
    if(cnt==0){
        cout<<"NO"<<endl;
    }
   else {
    cout<<"YES"<<endl;
   }
}
