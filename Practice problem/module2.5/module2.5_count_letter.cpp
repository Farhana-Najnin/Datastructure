#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> f(26,0);
    for (int i = 0; i < s.size(); i++)
    {
       f[s[i]-'a']++;

    }
    for(char i='a';i<='z';i++){
        if(f[i-'a']>0){
            cout<<i<<" "<<":"<<" "<<f[i-'a']<<endl;
        }
    }
    return 0;
}
