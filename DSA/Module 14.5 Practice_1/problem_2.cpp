#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    queue<int>q;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    bool flag=true;
    if(st.size()!= q.size())
    {
        flag=false;
    }
    if(st.size() == q.size())
    {
        while(!st.empty() && !q.empty())
        {
            if(st.top()!=q.front()) // jodi stack er top value queue er front value er soman na hoi thle flag = flase;
            {
                flag=false;
               
            }
            st.pop();
            q.pop();
        }
    }
   if(flag==true) cout<<"YES";
   else cout<<"NO";
    return 0;
}