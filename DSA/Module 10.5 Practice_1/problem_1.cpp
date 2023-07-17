#include<bits/stdc++.h>

using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
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
    Node * head_1= NULL;
    Node * head_2= NULL;
    Node * tail_1= NULL;
    Node * tail_2= NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val== -1) break;
        insert_tail(head_1,tail_1,val);
    }
     while(true)
    {
        cin>>val;
        if(val== -1) break;
        insert_tail(head_2,tail_2,val);
    }
bool flag = false;
    if (size(head_1) == size(head_2))
    {
        while (head_1 != NULL && head_2 != NULL)
        {
            if (head_1->val == head_2->val)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
            head_1 = head_1->next;
            head_2 = head_2->next;
        }
    }

    if (flag==1) cout<<"YES";
    else cout<<"NO";
   
  
    return 0;
}