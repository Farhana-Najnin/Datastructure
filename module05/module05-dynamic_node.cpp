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
    //Node head(10);
    Node* head=new Node(10);
    Node *a=new Node(20);
    //dot dia parbona akane karon pointer ty derefference kore dite hbe
    head->next=a;//a e akn obj er address rakhtese ager moto value rakhse na
    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<head->next->val<<endl;//head k akn derefference kora lagbe na
    cout<<(*(*head).next).val<<endl;//dot use korte caile 2bar derefference korte hobe

}
