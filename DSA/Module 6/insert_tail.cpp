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
       cout<<"Your Linked List : ";
    Node * temp=head;
    while(temp !=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node * head=NULL;
    while(true)
    {
        cout<<"Option 1 : Insert at tail"<<endl;
        cout<<"Option 2 : Print Linked List"<<endl;
        cout<<"Option 3 : Terminate"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {  
        cout<<"Please Insert a value : ";
        int v;
        cin>>v;
        inert_at_tail(head,v);
}
   else if(op==2)
   {
     print_linked_list(head);
   }
   else if(op==3)
   {
    break;
   }

    }
    return 0;
}