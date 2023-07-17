#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
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
void insert_at_head(Node * &head,int v)
{
    Node * newnode=new Node(v);
    newnode->next=head;
    head=newnode;

}
void insert_at_position(Node * head,int pos,int v)
{
    Node * newnode= new Node(v);
    Node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
  temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void print_normal( Node * head)
{
    Node * temp=head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int a;
    while(true)
    {
        cin>>a;
        if(a==-1) break;
            insert_at_tail(head,tail,a);
    }
        
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
          if(pos==0)
   {
    insert_at_head(head,val);
    print_normal(head);
    }
   else if(pos== size(head))
   {
   insert_at_tail(head,tail,val);
   print_normal(head);
   }
   else if(pos >= size(head))
   {
    cout<<"Invalid"<<endl;
   }
   else
   {
    insert_at_position(head,pos,val);
    print_normal(head);
   }
       
    }
    
    return 0;
}