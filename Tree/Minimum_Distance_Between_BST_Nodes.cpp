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
    vector<int> inorder_traversal;
    int ans = INT_MAX;

    void inorder(TreeNode* root)
    {
        if(root)
        {
            inorder(root->left);
            inorder_traversal.push_back(root->val);
            inorder(root->right);
        }
    }
public:
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        for(int i=1;i<inorder_traversal.size();i++)
            ans = min(ans, inorder_traversal[i]-inorder_traversal[i-1]);
        return ans;
    }
};