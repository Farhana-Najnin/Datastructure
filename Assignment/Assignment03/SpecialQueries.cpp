#include<bits/stdc++.h>
using namespace std;
int main(){

queue<string>q;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x==0){
            string x1;
    cin>>x1;
          q.push(x1);
        //  cout<<q.front()<<endl;
    }
    else if(x==1){
        if(q.empty()==0){
            cout<<q.front()<<endl;
            q.pop();
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }
}
return 0;
}

