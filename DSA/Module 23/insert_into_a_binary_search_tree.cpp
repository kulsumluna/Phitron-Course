// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the TreeNode class structure

//     template <typename T>
//     class TreeNode {
//        public:
//         T val;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T val) {
//             this->val = val;
//             left = NULL;
//             right = NULL;
//         }
//     };

// ************************************************************/

// TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
// {
//     if(root == NULL){
//         root = new TreeNode<int>(val);
//         return root;
//     }
//     if(root->val > val){
//         root->left = insertionInBST(root->left,val);
//     }else{
//         root->right = insertionInBST(root->right,val);
//     }
//     return root;
// }