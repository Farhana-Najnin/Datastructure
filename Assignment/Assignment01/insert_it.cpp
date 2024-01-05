#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cin>>a;
    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }
cin>>b;
vector<int>v2(b);
for(int i=0;i<b;i++){
    cin>>v2[i];
}
cin>>k;
v.insert(v.begin()+k,v2.begin(),v2.end());

for(int x:v){
    cout<<x<<" ";
}
return 0;
}

