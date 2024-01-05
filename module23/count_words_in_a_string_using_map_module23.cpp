#include<bits/stdc++.h>
using namespace std;
int main(){
string sentence;
getline(cin,sentence);
string word;
stringstream ss(sentence);
map<string,int>mp;
while(ss>>word){
mp[word]++;
}
//sobgulo wod koibar asce dekhar jnno
for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
//specific word kotobar asce dekhar jnno
cout<<mp["cricket"]<<endl;
return 0;
}
