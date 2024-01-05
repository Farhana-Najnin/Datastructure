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
             cout<<endl<<"Inserted at tail"<<endl<<endl;
    //direct point change kra jaina
     head=newNode;// head pointer avabe update hobena,main er head tao update hobe na
     return;//ferot cole jai jate sejnno return must deoa lagbe noile infinte loop e cole jai
     }
     while(tmp->next!=NULL)//ai consition e last node a pousabo
        {
        tmp=tmp->next;
     }
     //cout<<tmp->val<<" ";
     //tmp akn last node e
     tmp->next=newNode;
     cout<<endl<<"Inserted at tail"<<endl<<endl;
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
void insert_at_any_position(Node *head,int pos, int v){
Node *newNode=new Node(v);
Node *tmp=head;
for(int i=1;i<=pos-1;i++)
    {
    tmp=tmp->next;
}
//newnode insert korlm
newNode->next=tmp->next;
tmp->next=newNode;
cout<<endl<<endl<<"Inserted a position "<<pos<<endl<<endl;
}
void insert_at_head(Node* &head, int v){
Node *newNode=new Node(v);
newNode->next=head;
head=newNode;
cout<<endl<<"Inserted at head"<<endl<<endl;
}
void delete_from_position(Node *head,int pos){
Node *tmp=head;
for(int i=1;i<=pos-1;i++){
    tmp=tmp->next;
}
Node*deleteNode=tmp->next;
tmp->next=tmp->next->next;
delete deleteNode;
}

int main()
{
Node *head =NULL;
while(true)//infinite time input nite cai ajnno infinite loop calaisi
{
    cout<<"Option 1:Insert at Tail"<<endl;
    cout<<"Option 2:print linked list"<<endl;
     cout<<"Option 3:insert at any position"<<endl;
         cout<<"Option 4:Insert at head "<<endl;
         cout<<"Option 6: delete from position"<<endl;
    cout<<"Option 5:Terminate "<<endl;
    int op;
    cin>>op;
    if(op==1){
            cout<<"plz enter value: ";
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(op==2){
        print_linked_list(head);
    }
    else if(op==3){
      int pos,v;
    cout<<"enter position: ";
    cin>>pos;

    cout<<"enter value: ";
    cin>>v;
    if(pos==0)
    {
        insert_at_head(head,v);
    }
    else{
        insert_at_any_position(head,pos,v);
    }

    }
    else if(op==4){
       int v;
       cout<<"Enter value: ";
       cin>>v;
       insert_at_head(head,v);
    }
    else if(op==6){
        int pos;
        cout<<"Enter position: ";
        cin>>pos;
        delete_from_position(head,pos);
    }
    else if(op==5){
        break;
    }
  //  print_linked_list(head);
}
    return 0;


}



