#include<bits/stdc++.h>
using namespace std;
int main(){
stack<int>st;
stack<int>st2;
int n,m;
cin>>n>>m;

for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
    }
    queue<int>q;
for(int i=0;i<m;i++){
    int x;
    cin>>x;
    q.push(x);
    }

  int cnt=0;
    if(n==m)
    {
        while(!q.empty())
        {
            if(st.top()==q.front())
            {

                //  cout<<st1.top()<<" "<<q.front()<<" "<<cnt<<endl;
                st.pop();
                q.pop();
            }
            else
            {
                cnt++;
                //cout<<cnt<<endl;
                break;
            }
        }

        if(cnt==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        /*while(st1.top()==st2.top()){
             cout<<st1.top()<<" "<<st2.top()<<endl;
             st1.pop();
             st2.pop();
        }*/



    }

 else{
    cout<<"NO"<<endl;
 }
return 0;
}
