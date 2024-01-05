#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        stack<char>s;
        stack<char>s1;
        int x;
        cin>>x;
        string m;
        cin>>m;

        for(char c:m)
        {
            //cout<<"r";
            if(s.empty())
            {
                s.push(c);
            }

           else if((c=='R'&&s.top()=='B')||(c=='B'&&s.top()=='R'))
            {
                char p='P';

                s.pop();
                if(!s.empty()&&s.top()=='P')
                {

                         s.pop();
                     }
                else
                {
                    s.push(p);
                }
              //cout<<s.top();

            }
            else if((c=='R'&&s.top()=='G')||(c=='G'&&s.top()=='R'))
            {
                char p='Y';

                s.pop();

                if(!s.empty()&&s.top()=='Y')
                {

                         s.pop();
                 }
                else
                {
                    if(!s.empty()&&s.top()==c){
                        s.pop();
                    }
                    else
                    s.push(p);
                }
                //cout<<s.top();

            }
            else if((c=='G'&&s.top()=='B')||(c=='B'&&s.top()=='G'))
            {
                int p='C';

                s.pop();
                if(!s.empty()&&s.top()=='C')
                {
                    if(!s.empty()){
                    s.pop();
                    }
                }
                else
                {
                    s.push(p);
                }
               // cout<<s.top();
            }
            else{
                    if(!s.empty()&&s.top()==c){
                        s.pop();
                    }
                    else
                 s.push(c);
            }
        }

        while(!s.empty())
        {
            s1.push(s.top());
            s.pop();
        }
        while(!s1.empty())
        {
            cout<<s1.top();
            s1.pop();
        }
        cout<<endl;
    }
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        stack<char>s;
        stack<char>st;
        stack<char>st1;
        stack<char>st2;
        int x;
        cin>>x;
        string m;
        cin>>m;

        for(char c:m)
        {
            s.push(c);
        }
        while(!s.empty()){

            st.push(s.top());
          //cout<<s.top()<<" "<<st.top();
            s.pop();
        }

 /*while(!st.empty())
        {
        cout<<st.top();
        st.pop();
        }*/
       /*while(!st.empty())
        {

            char v=st.top();
            st.pop();
            cout<<st.top()<<endl;

            if((v=='R'&&st.top()=='B')||(v=='B'&&st.top()=='R'))
            {
                char p='P';

                st.pop();
                st1.push(p);
               cout<<st.top();

            }
            else  if((v=='R'&&st.top()=='G')||(v=='G'&&st.top()=='R'))
            {
                char Y='Y';

                st.pop();

                st1.push(Y);
               cout<<st.top();

            }
            else if((v=='G'&&st.top()=='B')||(v=='G'&&st.top()=='B'))
            {
                int C='C';

                st.pop();

                st1.push(C);

cout<<st.top()<<" ";
            }
            else
            {
                st1.push(v);
            }
        }
        /*while(!st1.empty())
        {
        cout<<st1.top();
        st1.pop();
        }*/
      /* while(!st1.empty()){

          int r=st1.top();
          st1.pop();
          if(r==st1.top()){
              st.pop();
          }
          else{
              st2.push(r);
          }
        }
        while(!st2.empty())
        {
        cout<<st2.top();
        st2.pop();
        }*/


 //  }

  //  return 0;
//}*/
