#include<bits/stdc++.h>
using namespace std;
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

void insert_at_tail(Node * &head, Node * &tail,int v)
{
    Node * newnode= new Node(v);
    if(head== NULL)
    {
   head= newnode;
   tail= newnode;
   return;
    }
  tail->next=newnode;
  tail=newnode;
}

int size(Node * head)
{
    int count=0;
    Node * temp = head;
    while(temp != NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    int val;
    Node * head= NULL;
    Node * tail= NULL;
    Node * head_1= NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head_1,tail,val);
    }
    
      if(size(head)== size(head_1)) cout<<"YES";
      else cout<<"NO";
    
    return 0;
}