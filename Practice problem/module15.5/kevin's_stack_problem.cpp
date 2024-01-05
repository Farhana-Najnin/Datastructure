#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<int>st;
	for(char c:s){
		st.push(c);
	}
	s.clear();

        while (!st.empty()) {
          int v = st.top();
          s.push_back(v);
          st.pop();
        }
		return s;
}

