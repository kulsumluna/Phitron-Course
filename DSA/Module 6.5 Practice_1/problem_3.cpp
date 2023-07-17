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
void midprint(Node * Head)
{
    int sz= size(Head);
    int mid=(sz+1)/2;
    Node * temp=Head;
    for(int i=0;i<mid-1;i++)
    {
        temp=temp->next;
    }
    if(sz %2 ==0)
    {
        cout<<temp->val<<" "<<temp->next->val<<endl;
    }
    else
    {
        cout<<temp->val<<endl;
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
        inert_at_tail(head,val);
    }
     midprint(head);
    
    return 0;
}