#include<bits/stdc++.h>
using namespace std;
class my_stack
{
  public:
  list<int>l;
  void push(int val)
  {
    l.push_back(val);
  }
  void pop()
  {
    l.pop_back();
  }
  int top()
  {
     return l.back();
  }
  int size()
  {
    return l.size();
  }
  bool empty()
  {
    if(l.size()== 0) return true;
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
while(!st.empty())  // empty nah howa prjnto cholo
{
   cout<<st.top()<<endl;
   st.pop();
}
    
    return 0;
}