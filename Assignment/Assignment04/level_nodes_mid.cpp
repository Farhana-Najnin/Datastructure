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
void nodeLevel(Node* root, int searchedLevel,vector<int>&v)
{
    // Write your code here.

    queue<pair<Node* ,int>>q;
if(root==NULL) return;
    q.push({root,0});

    while(!q.empty()){
        pair<Node* ,int>pr=q.front();
        q.pop();
        Node* node=pr.first;
        int level=pr.second;

        //cout<<"N:"<<root->val<<" "<<"l:"<<level<<endl;
       if(level==searchedLevel){
            v.push_back(node->val);
            //cout<<v.begin()<<endl;
        }

        if(node->left){
            q.push({node->left,level+1});
        }
        if(node->right){
            q.push({node->right,level+1});
        }
    }
}
vector<int> Nod(Node* root, int searchedLevel){
    vector<int>v;
    nodeLevel(root,searchedLevel,v);
    /*for(int i:v){
        cout<<i<<" ";
    }*/
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

    Node *p=q.front();
    q.pop();

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

    p->left=myLeft;
    p->right=myRight;

    if(p->left)
       q.push(p->left);
    if(p->right)
        q.push(p->right);

}
return root;
}

int main(){

Node *root=input_tree();

vector<int>v1;
int s;
cin>>s;


v1=Nod(root,s);
if(v1.empty()){
    cout<<"Invalid"<<endl;
}
else{
    for(int i:v1){
        cout<<i<<" ";
}
}
return 0;
}





