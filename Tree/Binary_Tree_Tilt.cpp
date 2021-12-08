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
    int tilt = 0;
    int helper(TreeNode* root)
    {
        if(root == NULL) return 0;
        int left = helper(root -> left);
        int right = helper(root -> right);
        tilt += abs(left - right);
        return left + right + root -> val;
    }
    
public:
    int findTilt(TreeNode* root) {
        helper(root);
        return tilt;
    }
};