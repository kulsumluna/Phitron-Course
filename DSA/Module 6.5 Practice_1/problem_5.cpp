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
void acending_sort(Node * head)
{
    Node * temp = head;
    bool flag =true;
    for(Node * i=head;i->next!=NULL;i=i->next)
    {
        for(Node * j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                flag=false;
                break;
            }
        }
    }
    flag ? cout<<"YES" : cout<<"NO";

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
    acending_sort(head);
    
    
    return 0;
}