// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
// vector<int>v1;
// vector<int>v2;
// void first_tree(TreeNode* root1)
// {
//     // if(root1 == NULL) return 0;
//     if(!root1) return;
//   if(root1->left==NULL && root1->right==NULL)
//   {
//     v1.push_back(root1->val);
//     return;
//   }
//   first_tree(root1->left);
//   first_tree(root1->right);
// }
// void second_tree(TreeNode* root2)
// {
//     // if(root2 == NULL) return 0;
//       if(!root2) return;
//   if(root2->left==NULL && root2->right==NULL)
//   {
//     v2.push_back(root2->val);
//     return;
//   }
//   second_tree(root2->left);
//   second_tree(root2->right);
// }
//     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//         first_tree(root1);
//         second_tree(root2);
//         return(v1==v2);
        
//     }
// };