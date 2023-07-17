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
   
   cout<<endl<<"Inserted at head"<<endl<<endl;
   return;
    }
    Node * temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }   // temp last node ee obosthan krbe
    temp->next=newnode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;

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
void insert_at_position(Node * head,int pos,int v)
{
    Node * newnode= new Node(v);
    Node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
  temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    cout<<endl<<"Inserted at position "<<pos<<endl;
}
void insert_at_head(Node * &head,int v)
{
    Node * newnode=new Node(v);
    newnode->next=head;
    head=newnode;
    cout<<endl<<"Inserted at head"<<endl<<endl;

}
void  delete_from_position( Node *head, int pos)
{
    Node * temp= head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    Node * deletenode= temp->next;
    temp->next=temp->next->next;
    delete deletenode;
}
int main()
{
    Node * head=NULL;
    while(true)
    {
        cout<<"Option 1 : Insert at tail"<<endl;
        cout<<"Option 2 : Print Linked List"<<endl;
        cout<<"Option 3 : Insert any position"<<endl;
        cout<<"Option 4 : Insert at Head"<<endl;
        cout<<"Option 5 : Delete From position"<<endl;
        cout<<"Option 6 : Terminate"<<endl;
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
    int pos,v;
    cout<<"Enter Position : ";
    cin>>pos;
    cout<<"Enter value : ";
    cin>>v;
    if(pos==0)
    {
       insert_at_head(head,v); 
    }
    else
    {
        insert_at_position(head,pos,v);
    }
   }
   else if(op==4)
   { 
    int v;
     cout<<"Enter value : ";
    cin>>v;
    insert_at_head(head,v);
   }
   else if(op==5)
   {
    int pos;
    cout<<"Enter at position : ";
    cin>>pos;
    delete_from_position(head,pos);
   }
   else if(op==6)
   {
    break;
   }

    }
    return 0;
}