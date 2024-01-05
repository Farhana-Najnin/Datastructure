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
int CountLength(Node *&head){
int cnt=0;
Node *tmp=head;
while(tmp!=NULL){
      cnt++;
      tmp=tmp->next;
      }
      return cnt;
}
void FindMid(Node *head){
                  int sz=CountLength(head);
                  int mid=(sz+1)/2;
                  Node *tmp=head;
                  for(int i=0;i<mid-1;i++){
                    tmp=tmp->next;
                  }
                  if(sz%2==0){
                    cout<<tmp->val<<" "<<tmp->next->val<<endl;
                  }
                  else
                    cout<<tmp->val<<endl;
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
  FindMid(head);

}
