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
private:
    int DFS(TreeNode* node, int sum)
    {
        int t = sum*10 + node->val;
        int l_sum =0 ,r_sum=0;
        if(node->left == NULL && node->right==NULL) return t;
        if(node->left)
        {
            int val = node->val;
            l_sum = DFS(node->left, sum*10+val);
        }
        if(node->right)
        {
            int val = node->val;
            r_sum = DFS(node->right, sum*10+val);
        }
        return l_sum+r_sum;
    }
    
public:
    int sumNumbers(TreeNode* root) {
        if(!root->left && !root->right) return root->val;
        return DFS(root, 0);
    }
};