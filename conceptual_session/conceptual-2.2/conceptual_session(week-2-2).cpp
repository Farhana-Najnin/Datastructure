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
void print_recursion(Node *n){
if(n==NULL ) return;
cout<<n->val<<" ";
print_recursion(n->next);
}
void print_reverse(Node *n){
if(n==NULL ) return;

print_reverse(n->next);
cout<<n->val<<" ";
}
void insert_tail(Node *&head,Node *&tail,int val )
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
int countLength(Node *&head)
{

int cnt=0;
Node *temp=head;
while(temp!=NULL){
    cnt++;
    temp=temp->next;
}
return cnt;
}

void findMid(Node *head){
    int size = countLength(head);
    int mid=(size+1)/2;
    Node *temp=head;
    for(int i=0;i<mid-1;i++){
    temp=temp->next;
}
if(size%2==0){
    cout<<temp->val<< " "<<temp->next->val<<endl;
}
else{
    cout<<temp->val<<endl;
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

                if(i->val < j->val){
                    swap(i->val,j->val);
                }
            }
        }

int size=countLength(head);
findMid(head);


return 0;
}

