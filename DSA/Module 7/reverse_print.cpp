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
    void print_linked_list(Node * head){
    Node * temp=head;
    while(temp!=NULL)
    {
       cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node * curr)
{
    // base case
    if(curr==NULL) return;
    print_reverse(curr->next);
    cout<<curr->val<<" ";

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

  print_linked_list(head);
  cout<<endl;
  print_reverse(head);

    
    return 0;
}