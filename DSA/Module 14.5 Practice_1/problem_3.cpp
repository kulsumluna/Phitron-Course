#include<bits/stdc++.h>

using namespace std;
int main()
{
    stack<int>s;
int m;
cin>>m;
for(int i=0;i<m;i++)
{
    int y;
    cin>>y;
    s.push(y);
}

stack<int> st;
while(!s.empty())
{
    st.push(s.top());
    s.pop();
}
 while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop(); 
    }
    return 0;
}