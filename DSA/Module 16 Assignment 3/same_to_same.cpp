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
class Node{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myQueue{
    public:
    Node * head=NULL;
    Node * tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node * newnode=new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void pop()
    {
        sz--;
        Node * deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    int front()
    {
        return head->val;
    }
  int size()
  {
    return sz;
  }
  bool empty()
  {
    if(sz==0) return true;
    else return false;
  }
  

};
int main()
{
    my_stack st;;
    int n;
    cin>>n;
     int m;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
     myQueue q;
   
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