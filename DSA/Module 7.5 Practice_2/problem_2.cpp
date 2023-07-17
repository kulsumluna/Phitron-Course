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

void reverse_list(Node *&head, Node *temp)
{
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    reverse_list(head, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
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
    Node * tail= NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    reverse_list(head,head);
    print_linked_list(head);
  return 0;
}