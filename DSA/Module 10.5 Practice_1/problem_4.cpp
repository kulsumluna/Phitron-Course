#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node * prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_position(Node * head, int pos,int val)
{
    Node * newnode= new Node(val);
     Node * temp= head;
     for(int i=1;i<=pos-1;i++)
     {
        temp=temp->next; // akhne temp 2 nmbr position ee thakbe
     }
    newnode->next=temp->next; // 100 er next ee 30
    temp->next=newnode; // 20 er next ee 100
    newnode->next->prev=newnode; // 30 er previous ee 100
    newnode->prev=temp; // 100 er previous ee 20
}
void insert_head(Node * &head, Node *&tail ,int val)
{
    Node * newnode= new Node (val);
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;

    head=newnode;
}
void insert_tail( Node *&head,Node *&tail, int val)
{   Node * newnode= new Node(val);
 
    if(tail==NULL)
    {
         head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}
void print_normal( Node * head)
{
    Node * temp=head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse(Node * head,Node * tail)
{
    Node * i= head;
    Node * j= tail;
    while(i!=j && i->next!=j)
    {
   swap(i->val,j->val);
   i=i->next;
   j=j->prev;
    }
    swap(i->val,j->val);
 }
int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
          if(pos==0)
   {
    insert_head(head,tail,val);
    print_normal(head);
    reverse(head,tail);
    print_normal(head);
    }
   
   
   else if(pos== size(head))
   {
   insert_tail(head,tail,val);
    print_normal(head);
   reverse(head,tail);
   print_normal(head);
   }
   else if(pos >= size(head))
   {
    cout<<"Invalid"<<endl;
   }
   else
   {
    insert_at_position(head,pos,val);
      print_normal(head);
    reverse(head,tail);
    print_normal(head);
   }
        
    }
    return 0;
}