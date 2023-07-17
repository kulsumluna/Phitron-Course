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

void inert_at_tail(Node * &head,int v)
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

    cout<<endl;
    cout<<"Your Linked List : ";
    Node * temp=head;
    while(temp !=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    int val;
    Node * head= NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        inert_at_tail(head,val);
    }
    print_linked_list(head);
    
    return 0;
}