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
    vector<int> A;
    
    void minus(TreeNode *root, int val)
    {
        if(root!=NULL)
        {
            minus(root -> left, val);
            A.push_back(abs(root -> val - val));
            minus(root -> right, val);
        }
    }
    
    void traverse(TreeNode *root)
    {
        if(root != NULL)
        {
            traverse(root -> left);
            minus(root, root -> val);
            traverse(root -> right);
        }
    }
    
public:
    int maxAncestorDiff(TreeNode* root) {
        traverse(root);
        return *max_element(A.begin(), A.end());
    }
};