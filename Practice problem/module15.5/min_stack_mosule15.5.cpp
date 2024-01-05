#include <bits/stdc++.h>
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<int>s1,s2;
	public:


		// Constructor
		minStack()
		{
			// Write your code here.
		}

		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			s1.push(num);
			if(s2.empty() || s2.top()>=num)
				s2.push(num);
                }

		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(s1.empty()) return -1;

							int v=s1.top();
                          s1.pop();
                          if(v==s2.top()) {
							  s2.pop();
						  }
						  return v;
                }

		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(s1.empty()) return -1;
			else
			return s1.top();

		}

		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(s2.empty()) return -1;
			else
			return s2.top();
		}
};
