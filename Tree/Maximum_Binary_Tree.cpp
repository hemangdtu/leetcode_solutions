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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        vector<TreeNode *> nodeStack;
        for (int i = 0; i < nums.size(); ++i)
        {
            auto node = new TreeNode(nums[i]);
            while (!nodeStack.empty() && nums[i] > nodeStack.back() -> val)
            {
                node -> left = nodeStack.back();
                nodeStack.pop_back();
            }
            if (!nodeStack.empty())
                nodeStack.back() -> right = node;
            nodeStack.push_back(node);
        }
        return nodeStack.front();
    }
};