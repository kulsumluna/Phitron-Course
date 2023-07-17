#include<bits/stdc++.h>

using namespace std;
int main()
{
    queue<int>q;  
    // take input in queue
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    stack<int> st;
    //copy queue from stack
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }  // notun queue te stack er element gulo push kori erpr print krle reverse order peye jabo
    queue<int>newQ;
    
    while(!st.empty())
    {
        newQ.push(st.top());
        st.pop();
    }  // print new queue
    while(!newQ.empty())
    {
        cout<<newQ.front()<<" ";
        newQ.pop();
    }
    return 0;
}