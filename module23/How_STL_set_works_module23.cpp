#include<bits/stdc++.h>
using namespace std;
int main(){
set<int>s;
int n;
cin>>n;
while(n--){
    int x;
    cin>>x;
    s.insert(x);//o(logn
    }
    //reverse(s.begin(),s.end());//avabe reverse korte parbona
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    if(s.count(1000))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    cout<<s.count(100)<<endl;
    return 0;
}
