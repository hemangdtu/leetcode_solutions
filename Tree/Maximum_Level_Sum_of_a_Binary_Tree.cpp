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
    int maxLevelSum(TreeNode* root) {
        if(!root)
            return 0;
        
        queue<TreeNode*> que({root});
        int maxSum = INT_MIN, maxlevel = 0, level = 0;
        
        while(!que.empty())
        {
            int levelSum = 0;
            int que_size = que.size();
            for(int i = 0; i < que_size; i++)
            {
                TreeNode* tmp = que.front();
                que.pop();
                levelSum += tmp -> val;
                if(tmp->left)
                    que.push(tmp->left);
                if(tmp->right)
                    que.push(tmp->right);
            }
            if(levelSum > maxSum)
            {
                maxSum = levelSum;
                maxlevel = level++;
            }
            else
                level++;
        }
        return maxlevel+1;
    }
};