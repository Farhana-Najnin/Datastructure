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
int cnt=0;
/*int NodeNo(Node *root){

if(root==NULL) return cnt ;
else{
    cnt++;
    cout<<cnt;
    return cnt;
}

NodeNo(root->left);
NodeNo(root->right);
return cnt;
}/*
/*int no(Node *root){
    int cnt=0;
    NodeNo(root,cnt);
    return cnt;
}*/
int maxHeight(Node *root){
if(root==NULL) return 0;
int l=maxHeight(root->left);
int r=maxHeight(root->right);
return max(l,r)+1;
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
    cnt++;
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
    if(p->left){
       q.push(p->left);
        cnt++;
    }
    if(p->right){
        q.push(p->right);
        cnt++;
    }

}
return root;
}
int x(int m){
    int r=2;
    int b=2;
    while (m != 1) {
        //cout<<r;
        r *= b;
        m--;
    }

    return r;
}
int main(){

Node *root=input_tree();

int n=cnt;
int m=maxHeight(root);

int x1=x(m);
   // cout<<m<<" "<<n<<" "<<x1;
if(n==(x1-1)){
    cout<<"YES"<<endl;
}
else
    cout<<"NO"<<endl;

return 0;
}
