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
        void delete_duplicate(Node * head)
{
       Node * temp= head;
    while(temp !=NULL)
    {
        while(temp->next!= NULL && temp->val ==temp->next->val)
        {
            temp->next=temp->next->next;
        }
        temp=temp->next;
    }

}
void insert_at_tail(Node * &head,int v)
{
    Node * newnode= new Node(v);
    if(head== NULL)
    {
   head= newnode;
   return;
    }
    Node * temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }   // temp last node ee obosthan krbe
    temp->next=newnode;

}
void print_linked_list(Node * head){
    Node * temp=head;
    while(temp !=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main()
{
    int val;
    Node * head= NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,val);
    }
      
    // print ascending
     for(Node * i= head; i->next!= NULL;i=i->next)
    {
        for(Node * j= i->next;j != NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    delete_duplicate(head);
    print_linked_list(head);
    
    return 0;
}