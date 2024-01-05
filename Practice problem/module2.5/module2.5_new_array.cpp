#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
     vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
      for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int>c;
    c=b;

    c.insert(c.end(),a.begin(),a.end());
   // replace(b.begin)
    /*for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";

    }*/
    for(int x: c){
        cout<<x<<" ";
    }

    return 0;
}
