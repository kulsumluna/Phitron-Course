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
};
void pre_order(Node* root,int *mn,int* mx)
{
    //base case
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL)
    {
        *mn=min(*mn,root->val);
        *mx=max(*mx,root->val);
        }
        pre_order(root->left,mn,mx);
        pre_order(root->right,mn,mx);
}

int main()
{
    Node * root= input_tree();
   int min=INT_MAX;
   int max=INT_MIN;
   pre_order(root,&min,&max);
  cout<<max<<" "<<min;
;    return 0;
}