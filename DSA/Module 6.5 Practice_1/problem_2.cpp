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
void check_duplicate(Node* head)
{
    bool flag=false;
 
    while (head->next != NULL) {
 
        // Starting from the next node
        Node *ptr = head->next;
        while (ptr != NULL) {
 
            // If some duplicate node is found
            if (head->val == ptr->val) {
                flag=true;
                break;
            }
            ptr = ptr->next;
        }
 
        head = head->next;
    }
    flag ? cout<<"YES" : cout<<"NO";

    
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
  check_duplicate(head);
    
    return 0;
}