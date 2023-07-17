#include<bits/stdc++.h>
using namespace std;
// create Node 
class Node {
public:
  int val;
  Node *next;
  // Create an constructor
  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};
// Create function that take input NOde 
void insert_Node(Node* &Head,Node* &Tail,int val){
    // Create new Node 
    Node* newNode = new Node(val);
    // Check Head NULL or NOT 
    if(Head == NULL){
        Head = newNode;
        Tail = newNode;
        return;
    }
    // IF Head not NULL 
    Tail->next = newNode;
    Tail = newNode;


}
// print the result 
void print_Node(Node* Head){
    // Take the pointer of the head node best practices
    Node* Temp = Head;
    while (Temp != NULL)
    {
        cout<< Temp->val << " ";
        Temp = Temp->next;
    }

}
int size(Node * Head)
{
    int count=0;
    Node * temp= Head;
    while( temp != NULL)
    {
        count++;
        temp=temp->next;
    } 
    return count;
}
void midprint(Node * Head)
{
    int sz= size(Head);
    int mid=(sz+1)/2;
    Node * temp=Head;
    for(int i=0;i<mid-1;i++)
    {
        temp=temp->next;
    }
    if(sz %2 ==0)
    {
        cout<<temp->val<<" "<<temp->next->val<<endl;
    }
    else
    {
        cout<<temp->val<<endl;
    }
}
int main(){
    
    // Create Head and Tail Pointer 
    Node* Head = NULL;
    Node* Tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        // if -1 than Breake 
        if (val == -1) break;
        insert_Node(Head, Tail,val);
    }

    //  print_Node(Head);
    midprint(Head);
     

     

    return 0;
}