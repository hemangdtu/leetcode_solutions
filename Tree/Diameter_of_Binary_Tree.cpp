/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int heightTree(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int ls = heightTree(root -> left);
        int rs = heightTree(root -> right);
        return max(ls, rs) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        int h1 = heightTree(root -> left);
        int h2 = heightTree(root -> right);
        int op1 = h1 + h2;
        int op2 = diameterOfBinaryTree(root -> left);
        int op3 = diameterOfBinaryTree(root -> right);
        return max(op1, max(op2, op3));
    }
};