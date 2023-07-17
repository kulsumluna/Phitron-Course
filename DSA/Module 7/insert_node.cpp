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
int main()
{
    Node * head=new Node(10);
    Node * a=new Node(20);
    Node * b=new Node(30);
    Node * c=new Node(40);
    Node * d=new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    insert_at_position(head,5,100);
    print_linked_list(head);
    
    return 0;
}