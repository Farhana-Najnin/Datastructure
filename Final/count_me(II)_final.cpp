#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int var=INT_MIN;


        int mx=INT_MIN;
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            if(mx<mp[a[i]])
            {
                mx=mp[a[i]];
                var=a[i];
            }
            else if(mx==mp[a[i]])
            {
                if(var<a[i])
                {
                    mx=mp[a[i]];
                    var=a[i];
                }

            }
        }

        cout<<var<<" "<<mx<<endl;
    }
    return 0;
}



