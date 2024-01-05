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
void insert(Node *&root,int x){
if(root==NULL) {
    root=new Node(x);
    return;
}
if(x<root->val){
    if(root->left==NULL)
       root->left=new Node(x);
    else
        insert(root->left,x);
}
else{
    if(root->right==NULL)
        root->right=new Node(x);
    else
        insert(root->right,x);
}
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
int x;
cin>>x;
insert(root,x);
return 0;
}
//10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1



