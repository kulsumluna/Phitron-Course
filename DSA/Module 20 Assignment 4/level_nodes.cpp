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
void level_nodes(Node * root,int x)
{
    queue<pair<Node*,int>> q;
    if(root) q.push({root,0});
    int level;
    while(!q.empty())
    {  //ber kore ana
    pair<Node*,int> f=q.front();
    q.pop();
    Node * node=f.first;
     level=f.second;

    // kaj kora
    if(level==x)
    {
        cout<<node->val<<" ";
    }
    //children push
    if(node->left) q.push({node->left,level+1});
    if(node->right) q.push({node->right,level+1});
    }
    if(x>level)
    {
        cout<<"Invalid"<<endl;
    }
}
        
       
int main()
{
    Node * root= input_tree();
    int x;
    cin>>x;

    level_nodes(root,x);

    return 0;
}