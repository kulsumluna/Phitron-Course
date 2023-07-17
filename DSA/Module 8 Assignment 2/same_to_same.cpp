#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
// insert node
void insert_at_tail(Node *&head,Node *&tail,int val)
{
    Node * newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

// get linked list size
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
    Node *head_1 = NULL;
    Node * tail=NULL;
    Node *head_2 = NULL;
    
    int val;
    // first time input
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
         insert_at_tail(head_1,tail,val);
        //  inert_at_tail(head_2,val);
    }
    // second time input
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head_2,tail,val);
    }
    // compare two list
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