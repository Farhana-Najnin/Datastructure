#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int flag=1;//ascending sort e ase
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else
    {
     cout<<"NO"<<endl;
    }
}
return 0;
}
