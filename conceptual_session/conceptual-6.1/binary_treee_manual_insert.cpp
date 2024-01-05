#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;
    }
};
void insert(Node*&root,int val){
Node*newNode=new Node(val);
if(root==NULL){
    root=newNode;
    return;
}
Node*cur=root;
Node*par=NULL;
    while(cur!=NULL){
        if(newNode->val<cur->val){
            par=cur;
            cur=cur->left;
        }
        else{
            par=cur;
            cur=cur->right;
        }
    }
    if(newNode->val<par->val)
        par->left=newNode;
    else
        par->right=newNode;

}
bool search_recursive(Node*root,int s){
if(root==NULL) return false;
if(root->val==s) return true;
if(root->val<s)
    return search_recursive(root->left,s);
else
    return search_recursive(root->right,s);
}
bool search_manually(Node*root,int s){
Node*cur=root;
while(cur!=NULL){
    if(s>cur->val)
     cur=cur->right;
    else if(s<cur->val)
    cur=cur->left;
    else
        return true;
}
return false;
}
void printBST(Node* root){
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    cout<<endl;
}
int main(){
    Node* root = NULL;

    insert(root,5);
    insert(root,4);
    insert(root,6);
    insert(root,2);
    insert(root,7);

    printBST(root);

    if(search_recursive(root,70)) cout<<"YES\n";
    else cout<<"NO\n";

    if(search_manually(root,7)) cout<<"YES\n";
    else cout<<"NO\n";


    return 0;
}
