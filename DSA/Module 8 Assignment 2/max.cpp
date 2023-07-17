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
void find_min_max(Node *head)
{
    Node *tmp = head;
    int min = tmp->val;
    int max = tmp->val;
    while (tmp != NULL)
    {
        if (tmp->val <= min)
        {
            min = tmp->val;
        }
        if (tmp->val >= max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << max << " " << min;
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
find_min_max(head);
    
    return 0;
}