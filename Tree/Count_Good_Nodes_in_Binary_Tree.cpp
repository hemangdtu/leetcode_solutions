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
    int goodNodes(TreeNode* root, int maxVal = INT_MIN) {
        if(root == NULL)
            return 0;
        
        maxVal = max(maxVal, root -> val);
        if(root -> val >= maxVal)
            return 1 + goodNodes(root-> left, maxVal) + goodNodes(root -> right, maxVal);
        else
            return goodNodes(root -> left, maxVal) + goodNodes(root -> right, maxVal);
    }
};