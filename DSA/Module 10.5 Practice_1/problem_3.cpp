#include<bits/stdc++.h>

using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_tail( Node *&head,Node *&tail, int val)
{   Node * newnode= new Node(val);
 
    if(tail==NULL)
    {
         head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}
int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void palindrome(Node * head,Node * tail)
{    
  int mid = size(head)/2;
  bool flag=false;
  while(mid--)
  {
    if(head->val== tail->val)
    {
        flag=true;
    }
    else{
        flag=false;
        break;

    }
    head=head->next;
    tail=tail->prev;
  }
  if(flag== true)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }

}
int main()
{
    Node * head= NULL;
    Node * tail= NULL;
   int val;
    while(true)
    {
        cin>>val;
        if(val== -1) break;
        insert_tail(head,tail,val);
    }   
palindrome(head,tail);

    return 0;
}