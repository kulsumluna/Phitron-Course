#include<bits/stdc++.h>

using namespace std;
class Node{
    public:
    int val;
    Node * left;
    Node * right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
   
};
 Node * input_tree()
{
    int val;
    cin>>val;
    Node * root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node *> q;
    if(root !=NULL) q.push(root);
    while(!q.empty())
    {  
        // 1.ber kore ana
        Node * p= q.front();
        q.pop();
    //2.jabotiyo kaj
    int l,r;
    cin>>l>>r;
    Node *left;
    Node *right;
    if(l==-1) left=NULL;
    else left=new Node(l);
    if(r==-1) right=NULL;
    else right=new Node(r);
    //connection
    p->left=left;
    p->right=right;

      //3.children node push
        if(p->left!=NULL) q.push(p->left);
        if(p->right!=NULL) q.push(p->right);
    }
    return root;
}
void level_order(Node * root)
{ 
    if(root==NULL)
    {
        cout<<"Tree Null"<<endl;
        return;
    }
    // 1.ber kore ana
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node * f= q.front();
        q.pop();
        // 2.jabotiyo kaj ache krbo
        cout<<f->val<<" ";
        // 3.tar children gulo k rakha
     
        if(f->left!=NULL) q.push(f->left);
        if(f->right!=NULL) q.push(f->right);
           
    }
}
int main()
{
    Node * root= input_tree();
    level_order(root);
    return 0;
}