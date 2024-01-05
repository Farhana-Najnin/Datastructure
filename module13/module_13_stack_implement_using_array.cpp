#include<bits/stdc++.h>
using namespace std;
class myStack{
public:
    vector<int>v;
    void push(int val){
    v.push_back(val);
    }
    void pop(){
    v.pop_back();
    }
    int top(){
    return v.back();
    }
    int size(){
    return v.size();
    }
    bool empty(){
    if(v.size()==0) return true;
    else return false;
    }
};
int main(){
myStack st;
/*
//akta value er ketre
st.push(10);
st.push(20);
cout<<st.top()<<endl;
st.pop();
cout<<st.top()<<endl;
st.pop();
//cout<<st.top()<<endl;//garbage value return korbe karon empty hoia gese
if(st.empty()==false){
    cout<<st.top()<<endl;
}*/

//multiple value er ketre
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    st.push(x);
    }
    while(st.empty()==false ){
        cout<<st.top()<<endl;
        st.pop();
    }

return 0;
}
