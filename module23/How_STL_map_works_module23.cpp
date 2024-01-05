#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    /*mp.insert({"sakib",75});
    mp.insert({"tamim",19});
    mp.insert({"rahim",100});
    mp.insert({"shamim",79});*/
    mp["sakib"]=79;
    mp["tamim"]=19;
    mp["rahim"]=100;
    mp["shamim"]=79;
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<mp["shamim"]<<endl;
    cout<<mp["rabbi"]<<endl;
    if(mp.count("akib"))
        cout<<"ase"<<endl;
    else cout<<"Nai"<<endl;
    return 0;
}
