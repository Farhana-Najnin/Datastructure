#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
            if(a[i]>0){

               replace(a.begin(),a.end(),a[i],1);
               //cout<<"positive"<<a[i]<<endl;
            }
    else if(a[i]<0){
     replace(a.begin(),a.end(),a[i],2);
    // cout<<"negative"<<a[i]<<endl;
    }
    }
      for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
    }
    return 0;
}
//
