#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    string x;
    cin>>x;
stack<char>st1;
stack<char>st2;
int cnt1=0;
int cnt2=0;
//cout<<"Gud"<<endl;
     for(char c:x)
        {
            if(c=='A'){
                   // cout<<c<<endl;
                st1.push(c);
                cnt1++;
            }
            else if(c=='B'){
                //cout<<c<<endl;
                st2.push(c);
                cnt2++;
            }

}
//cout<<cnt1<<" "<<cnt2;
if(cnt1==cnt2){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

    }



return 0;
}

