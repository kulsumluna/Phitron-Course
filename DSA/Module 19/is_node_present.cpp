// bool isNodePresent(BinaryTreeNode<int> *root, int x) {
//     // Write your code here
//     //base case
//     if(root==NULL) return false;
//     if(root->data==x) return true;
//     bool l= isNodePresent(root->left,x);
//     bool r= isNodePresent(root->right,x);
//     if(l==true|| r==true) return true;
//     else return false;
// }