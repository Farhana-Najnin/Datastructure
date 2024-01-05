
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *left;
    Node*right;
    Node(int val){
    this->val=val;
    this->left=NULL;
        this->right=NULL;
    }
};

void Mini(Node *root,int &mn,int &mx){
if(root==NULL) return ;
if(root->left==NULL && root->right==NULL){
   if(root->val>mx){
       mx=root->val;
   }
    if(root->val<mn){
        mn=root->val;
    }
}


Mini(root->left,mn,mx);
Mini(root->right,mn,mx);
return ;

}


Node *input_tree(){
int val;
cin>>val;
Node *root;
if(val==-1){
    root=NULL;
}
else{
    root=new Node(val);
}
queue<Node*>q;
if(root){
    q.push(root);
}
while(!q.empty()){
    //1.ber kore ana
    Node *p=q.front();
    q.pop();
    //jabotiyo ja kaj ache kora
    int l,r;
    cin>> l>> r;
    Node *myLeft;
    Node *myRight;
    if(l == -1)
        myLeft=NULL;
    else
        myLeft=new Node(l);
    if(r == -1)
        myRight=NULL;
    else
        myRight=new Node(r);
    //connection
    p->left=myLeft;
    p->right=myRight;
    //children gulo rakha
    if(p->left)
       q.push(p->left);
    if(p->right)
        q.push(p->right);

}
return root;
}
int main(){

Node *root=input_tree();
vector<int>v;
int mn=INT_MAX;
int mx=INT_MIN;
Mini(root,mn,mx);

cout<<mx<<" "<<mn;
return 0;
}
