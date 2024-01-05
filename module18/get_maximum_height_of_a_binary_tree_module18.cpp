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
void level_order(Node *root){
if(root==NULL) {
        cout<<"Tree nai ";
        return;
}
queue<Node*>q;
q.push(root);
while(!q.empty()){
    //1.ber kore ana-(fixed)
    Node *f=q.front();
    q.pop();
    //2.jabotiyo ja kaj ache kora
    cout<<f->val<<" ";
    //3.children gulo ke rakha-(fixed)
    if(f->left) q.push(f->left);
    if(f->right) q.push(f->right);

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
    if(l==-1)
        myLeft=NULL;
    else
        myLeft=new Node(l);
    if(r==-1)
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
int maxHeight(Node * root){
if(root==NULL) return 0;
int l=maxHeight(root->left );
int r=maxHeight(root->right);
return max(l,r)+1;
}
int main(){

Node *root=input_tree();
//level_order(root);

cout<<maxHeight(root)<<endl;
return 0;
}



