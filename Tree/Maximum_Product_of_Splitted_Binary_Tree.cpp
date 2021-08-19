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
    const unsigned int M = 1000000007;
    long res = 0;
    int sum(TreeNode *node, long total = 0)
    {
        if(node == NULL)
            return 0;
        int l = sum(node->left, total), r = sum(node->right, total);
        const int s = l + r + node->val;
        res = max(res, s * (total - s));
        return s;
    }
    
    int maxProduct(TreeNode* root) {
        const int total = sum(root);
        sum(root, total);
        return res % M;
    }
};