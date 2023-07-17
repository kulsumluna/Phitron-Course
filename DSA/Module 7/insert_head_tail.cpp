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
void print_linked_list(Node * head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
       cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_at_position(Node * head,int pos,int val)
{
    Node * newnode= new Node(val);
    Node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
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
void insert_at_tail(Node * &head,Node * &tail,int val)
{
    Node * newnode= new Node(val);
    if(head==NULL)
    {
     head=newnode;
     tail=newnode;
     return;
    }
    tail->next=newnode;
    tail=newnode;
}
 void insert_at_head(Node * &head,int val)
{
  Node * newnode=new Node(val);
      newnode->next=head;
      head=newnode;
 
}
int main()
{
    Node * head=new Node(10);
    Node * a=new Node(20);
    Node * b=new Node(30);
    Node * c=new Node(40);
    Node * d=new Node(50);
    Node * tail=d;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    // insert_at_position(head,5,100);
    // print_linked_list(head);
    int pos,val;
    cin>>pos>>val;
    if(pos==0)
    {
    insert_at_head(head,val);
    }
    else if(pos>size(head))
{
    cout<<"Invalid Index"<<endl;
}
   else if(pos==size(head))
   {
    insert_at_tail(head,tail,val);
   }
    else
    {
        insert_at_position(head,pos,val);
    }
    print_linked_list(head);
    return 0;
}