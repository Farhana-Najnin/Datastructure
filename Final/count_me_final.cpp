#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++){
    string var;
    string mx;
string sentence;
getline(cin,sentence);
string word;
stringstream ss(sentence);
map<string,int>mp;
while(ss>>word){
    mp[word]++;
    if(mp[mx]<mp[word]){
        mx=word;
        var=word;
    }
}
cout<<mx<<" "<<mp[mx]<<endl;
   }
return 0;
}

