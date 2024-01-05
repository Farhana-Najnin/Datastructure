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
void  nodeLevel(Node* root)
{
    // Write your code here.
    if(root==nullptr) return;
    //vector<int>v;
    queue<pair<Node* , int>>q;

    q.push({root,0});

    while(!q.empty()){
        pair<Node *, int>pr= q.front();
        q.pop();
        Node* node=pr.first;
        int level=pr.second;
        cout<<"Node: "<<node->val<<",level: "<<level<<endl;

        /*if(level==searchedLevel){
            v.push_back(root->val);
            return v;
        }*/

        if(node->left){
            q.push({node->left,level+1});
        }
        if(node->right){
            q.push({node->right,level+1});
        }

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

vector<int>v;

nodeLevel(root);

/*
int s;
cin>>s;
v=nodeLevel(root,s);

if(v.empty()!=NULL){
for(int i:v){
        cout<<i<<" ";
}
else
    cout<<"Invalid"<<endl;
*/
return 0;
}



