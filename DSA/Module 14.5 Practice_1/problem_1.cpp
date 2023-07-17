#include<bits/stdc++.h>
using namespace std;
class my_stack
{
  public:
  vector<int> v;
   void push(int val)
   {
    v.push_back(val);
   }
   void pop()
   {
    v.pop_back();
   }
   int top()
   {
    return v.back();
   }
   int size()
   {
    return v.size();
   }
   bool empty()
   {
    if(v.size()==0) return true;
    else return false;
   }
};
int main()
{
   my_stack st;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    st.push(x);
}
my_stack s;
int m;
cin>>m;
for(int i=0;i<m;i++)
{
    int y;
    cin>>y;
    s.push(y);
}
bool flag=true;
if(st.size()!= s.size())
{
   flag=false;
}
if(st.size()==s.size())
{
    while(!st.empty() && !s.empty())
    {
        if(st.top()!= s.top())
       {
        flag=false;
        break;

       }
       st.pop();
       s.pop();
    }
}
 flag ? cout<<"YES" :cout<<"NO";
    return 0;
}