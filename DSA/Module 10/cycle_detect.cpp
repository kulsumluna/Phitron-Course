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
int main()
{
    Node * head= new Node(10);
   Node * a= new Node(20);
   Node * b= new Node(30);
   Node * c= new Node(40);
//    Node * d= new Node(50);
//    Node * tail=d;
   head->next=a;
   a->next=b;
   b->next=c;

//    c->next=NULL;
//    d->next=a;
   bool flag=false;
   Node * slow=head;
   Node * fast=head;
   while( fast!= NULL && slow!= NULL)
   {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    {
        // cout<<"Cycle Detected"<<endl;
        flag=true;
        break;
    }
   }
   if( flag==true)
{
    cout<<"Cycle Detected"<<endl;
}
else {
    cout<<"No Cycle Detected"<<endl;
}
    
    return 0;
}