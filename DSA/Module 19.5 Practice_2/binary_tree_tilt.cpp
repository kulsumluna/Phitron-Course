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
// int sum_tree(TreeNode * root)
// {
//     if(!root) return 0;
//     int sum=root->val;
//     int l=sum_tree(root->left);
//     int r=sum_tree(root->right);
//     sum=sum+(l+r);
//     return sum;
// }
//     int findTilt(TreeNode* root) {
//         if(!root) return 0;
//         int sum=abs(sum_tree(root->left)-sum_tree(root->right));
//         sum+=( findTilt(root->left)+ findTilt(root->right));
//         return sum;
//     }
// };