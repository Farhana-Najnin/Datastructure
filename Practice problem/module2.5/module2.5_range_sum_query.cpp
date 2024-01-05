//TLE dibe-o(n*q)=10^10>10^7
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,q;
cin>>n>>q;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
while(q--){//o(q)
    int l,r;
    cin>>l>>r;
    l--;
    r--;
    int sum=0;
    for(int i=l;i<=r;i++)//worst case i=l=1,r=n hole ->o(n)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
}
}


