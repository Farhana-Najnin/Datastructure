#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node *next;
    Node *prev;
    Node (int val){
        this->val=val;
    this->next=NULL;
    this->prev=NULL;
    }
};
class myStack{
public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val){
   sz++;
   Node *newNode=new Node(val);
    if(head==NULL){
         head=newNode;
    tail=newNode;
     return;
    }
    newNode->prev=tail;
    tail->next=newNode;
    tail=tail->next;
   }
   void pop(){
       sz--;
       Node *deleteNode=tail;
       tail=tail->prev;
       if(tail==NULL) {
         head=NULL;
       }
       else{
        tail->next=NULL;
        delete deleteNode;
       }
   }
   int top(){
   return tail->val;
   }
   int size(){
   return sz;
   }
   bool empty(){
   if(sz==0)
    return true;
    else
        return false;
   }
};
class myQueue{
public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val){
   sz++;
   Node *newNode=new Node(val);
    if(head==NULL){
         head=newNode;
    tail=newNode;
     return;
    }

    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
   }
   void pop(){
       sz--;
       Node *deleteNode=head;
       head=head->next;

       if(head==NULL) {
         tail=NULL;
          delete deleteNode;
          return;
       }
       head->prev=NULL;
        delete deleteNode;
   }
   int front(){
   return head->val;
   }
   int size(){
   return sz;
   }
   bool empty(){
   if(sz==0)
    return true;
    else
        return false;
   }
};

int main(){
myStack st1;
myStack st2;
int n;
cin>>n;
int m;
cin>>m;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st1.push(x);
    }

myQueue q;

for(int i=0;i<m;i++){
    int x;
    cin>>x;
    q.push(x);
    }
     /*for(int i=0;i<m;i++){
    st2.push(q.front());
    q.pop();
    }*/

    int cnt=0;
   if(n==m){
        while(!q.empty()){
    if(st1.top()==q.front()){

        cout<<st1.top()<<" "<<q.front()<<" "<<cnt<<endl;
        st1.pop();
        q.pop();
    }
    else{
        cnt++;
        cout<<cnt<<endl;
        break;
    }
        }

if(cnt==0){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

            /*while(st1.top()==st2.top()){
                 cout<<st1.top()<<" "<<st2.top()<<endl;
                 st1.pop();
                 st2.pop();
            }*/



    }


   else{
    cout<<"NO"<<endl;
   }


return 0;
}
