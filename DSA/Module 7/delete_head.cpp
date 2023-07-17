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
void delete_node(Node * head,int pos)
{
    Node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    Node * deletenode= temp->next;
    temp->next=temp->next->next;
    delete deletenode;
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
void delete_head(Node *&head)
{
    Node * deletenode= head;
    head=head->next;
    delete deletenode;
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
    int pos;
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"Invalid index"<<endl;
    }
    else if(pos==0)
    {
        delete_head(head);
    }
    else
    {
     delete_node(head,pos);
    }
    
    print_linked_list(head);
    return 0;
}