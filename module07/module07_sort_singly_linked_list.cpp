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
            insert_tail(head,tail,val);
        }
        for(Node*i=head;i->next!=NULL;i=i->next){
            for(Node*j=i->next;j!=NULL;j=j->next){
                //cout<<i->val<<" "<<j->val<<endl;//check korbo kar sathe kar compare hosse
                if(i->val > j->val){
                    swap(i->val,j->val);//dereferenc ekore change kortesi ty change hosse
                }
            }
        }
        print_linked_list(head);
        cout<<head->val<<endl;
}
