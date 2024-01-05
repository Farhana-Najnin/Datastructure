#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node * next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
Node* head=new Node(10);
Node*a=new Node(20);
Node* b=new Node(30);
Node* c=new Node(40);
Node* d=new Node(50);

head->next=a;
a->next=b;
b->next=c;
c->next=d;

/*
//manually print
cout<<head->val<<endl;
cout<<head->next->val<<endl;
cout<<head->next->next->val<<endl;
cout<<head->next->next->next->val<<endl;
*/
while(head!=NULL){
    cout<<head->val<<endl;
    head=head->next;
}
//while loop e korle head null e cole jai,,head k harai felbo__r kuje pabona__ty kokhonoi head k move korabona
while(head!=NULL){ //---ai while loop e r value print hobe na karon head harai gese
    cout<<head->val<<endl;
    head=head->next;
}
//notun node temp nibo jate head na harai na jai
Node *tmp= head;
while(tmp!=NULL){
    cout<<tmp->val<<endl;
    tmp=tmp->next;
}
tmp=head;
while(tmp!=NULL){
    cout<<tmp->val<<endl;//--value print hobe
    tmp=tmp->next;
}
return 0;
}
