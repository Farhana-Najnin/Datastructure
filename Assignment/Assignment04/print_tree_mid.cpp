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
vector<int> reverseLevelOrder(Node*root){
    // Write your code here.
    vector<int>v;
    queue<Node *>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node * node=q.front();
        q.pop();
        v.push_back(node->val);
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
    }
    reverse(v.begin(),v.end());
    return v;

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


v=reverseLevelOrder(root);
for(int i:v){
        cout<<i<<" ";
}

return 0;
}
