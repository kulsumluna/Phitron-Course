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
void ascending_sort(Node * head)
{
    Node * temp=head;
    for(Node * i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
    void print_linked_list(Node * head){
    Node * temp=head;
    while(temp!=NULL)
    {
       cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node * head=NULL;
    Node * tail=NULL;
    int val;
    while(true)
{
    cin>>val;
    if(val==-1) break;
    insert_at_tail(head,tail,val);
}

    ascending_sort(head);
    print_linked_list(head);
    
    
    return 0;
}