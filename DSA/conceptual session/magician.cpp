#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
     stack<char>st;
    while(t--)
    {
        int n;
        cin>>n;
        while(n--)
        {
            char c;
            cin>>c;
            if(!st.empty() && st.top()==c)
        {
            st.pop();
        }
             else if(!st.empty() && c=='R'&& st.top()=='B' ||!st.empty() && c=='B' && st.top()=='R')
             {
                st.pop();
                st.push('P');
             }
         else if(!st.empty() && c=='R'&& st.top()=='G' ||!st.empty() && c=='G' && st.top()=='R')
             {
                st.pop();
                st.push('Y');
             }
            else if(!st.empty() && c=='G'&& st.top()=='B' ||!st.empty() && c=='B' && st.top()=='G')
             {
                st.pop();
                st.push('C');
             }
             else
             {
                st.push(c);
             }
        }
        stack<char>newst;
        while(!st.empty())
        { 
            if(!st.empty() && st.top()==newst.top())
            {
                st.pop();
                newst.pop();
            }
            else
            {
           newst.push(st.top());
            st.pop();
            }
           
        }
        while(!newst.empty())
        {  
           cout<<newst.top();
            newst.pop();
            }
        cout<<endl;
    }
    return 0;
}