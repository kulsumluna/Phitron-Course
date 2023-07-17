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
int Length(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void find_mid(Node *head)
{
    Node *tmp = head;
    int length = Length(tmp);
    int mid = (length + 1) / 2;
    for (int i = 0; i < mid - 1; i++)
    {
        tmp = tmp->next;
    }
    if (length % 2 == 0)
    {
        cout << tmp->val << " " << tmp->next->val;
    }
    else
    {
        cout << tmp->val;
    }
}
void sort_list(Node *head)
{
    Node *tmp = head;
    for (Node *i = tmp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
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
      sort_list(head);
      find_mid(head);

    
    return 0;
}