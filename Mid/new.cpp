#include<bits/stdc++.h>
using namespace std;
int flag=0;
class Node
{
public:
    string address;
    Node *next;
    Node *prev;
    Node(string address)
    {
        this->address=address;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_tail(Node *&head,Node *&tail,string address )
{
    Node *newNode=new Node(address);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;

}
void print_linked_list(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->address<<" ";
        temp=temp->next;
    }
}
Node *Find(Node *head,string address)
{
    Node *t;
    Node *tmp=head;
  /*  if(head->address==address){

        return tmp;
    }*/
    while(tmp!=NULL)
    {
        if(tmp->address==address)
        {
            flag++;
             return tmp;
        }
        tmp=tmp->next;
    }
    return t;
}
int main()
{

    Node *head=NULL;
    Node *tail=NULL;

    int q;

    string v;

    while(true)
    {

        cin>>v;
        if(v=="end")
        {
            break;
        }
        insert_tail(head,tail,v);
    }
//print_linked_list(head);
cin>>q;

for(int i=0;i<q;i++){
    string address;
         Node *tmp2;
    Node *tmp1;
    cin>>address;
    if(address=="visit")
        {
            cin>>address;
            tmp2=tmp1;
          tmp1=Find(head,address);
         // cout<<flag<<endl;
          if(flag==0){
            cout<<"Not Available"<<endl;
                tmp1=tmp2;
          }
            else
            {
               cout<<tmp1->address<<endl;
               flag=0;
            }
       }
       else if(address=="prev")
        {

            if(tmp1->prev!=NULL)
            {
                cout<<tmp1->prev->address<<endl;
            }
            if(tmp1->prev==NULL)
            {
                cout<<"Not Available"<<endl;
                continue;
            }
           tmp1=tmp1->prev;
        }
         else if(address=="next")
        {
            if(tmp1->next!=NULL)
            {
                cout<<tmp1->next->address<<endl;
                tmp1=tmp1->next;
            }

            if(tmp1->next==NULL)
            {
                  cout<<"Not Available"<<endl;
                continue;
            }

        }
}
return 0;
}

