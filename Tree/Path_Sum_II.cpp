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
    vector<vector<int>> pathSum(TreeNode* root, int sum)
    {
        vector<vector<int>> res;
        vector<int> cur;
        traverse( root, 0, sum, cur, res);
        return res;
    }
private:
    void traverse(TreeNode* root, int tmp, int sum, vector<int> cur, vector<vector<int>>& res){
        if(!root)
            return;
        
        cur.push_back(root->val);
        if(!root->left && !root->right && root->val+tmp == sum)
            res.push_back(cur);
        if(root->left)
            traverse( root->left, tmp+root->val, sum, cur, res);
        if(root->right)
            traverse( root->right, tmp+root->val, sum, cur, res);
        cur.pop_back();
    }
};