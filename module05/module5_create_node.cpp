#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
};
int main(){
Node a,b;
a.val=10;
b.val=20;
a.next=&b;
b.next=NULL;
cout<<a.val<<endl;
cout<<a.next->val<<endl;//cout<<b.val<<endl;---ata bujhai
cout<<(*a.next).val<<endl;//(*a.next).val==a.next->val
return 0;
}
