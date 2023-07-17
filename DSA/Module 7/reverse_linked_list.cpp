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
void print_linked_list(Node * head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
       cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node * n)
{
    if(n==NULL)return ;   // base case
    print_reverse(n->next);   // recurtion agey kaj pore krle ulta print hobe
    cout<<n->val<<" ";
    // print_reverse(n->next);
}

int main()
{
    Node * head=new Node(10);
    Node * a=new Node(20);
    Node * b=new Node(30);
    Node * c=new Node(40);
    Node * d=new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
   
    // print_linked_list(head);
    print_reverse(head);
    
    return 0;
}