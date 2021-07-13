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
    void dfs(TreeNode* root, set<int>& dict)
    {
        if(!root)
            return;
        dict.insert(root->val);
        dfs(root->left, dict);
        dfs(root->right, dict);
    }
    
public:
    int kthSmallest(TreeNode* root, int k) {
        set<int> dict;
        
        dfs(root, dict);
        
        if(dict.size() >= k)
        {
            auto iter = dict.begin();
            for(int i=0; i<k-1; i++)
                iter++;
            return *iter;
        }
        return -1;
    }
};