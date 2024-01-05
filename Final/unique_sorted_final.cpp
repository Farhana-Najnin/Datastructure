#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n;
    cin>>n;
    set<int>s;
    while(n--){
        int a;
        cin>>a;
        s.insert(a);
    }
    vector<int>v;
    for(auto it=s.begin();it!=s.end();it++){
        v.push_back(*it);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    }
    return 0;
}

