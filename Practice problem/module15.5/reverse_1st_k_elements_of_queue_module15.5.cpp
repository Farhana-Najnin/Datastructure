#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.


    stack<int>st;
    queue<int>q1;
    while(k!=0){
     int v=q.front();
     q.pop();
     st.push(v);
     k--;
    }
    //reverse q1--then push in q again
    while(!st.empty()){
 int val= st.top();
       st.pop();
       q1.push(val);
    }
    while(!q.empty()){
         int val= q.front();
       q.pop();
       q1.push(val);

    }
    return q1;



}
