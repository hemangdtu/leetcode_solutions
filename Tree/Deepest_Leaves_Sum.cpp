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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int levelSum = 0;
        while(!q.empty())
        {
            levelSum = 0;
            int size = q.size();
            for(int i = 0; i<size; i++)
            {
                TreeNode* currentNode = q.front();
                levelSum += currentNode -> val;
                if(currentNode -> left != NULL)
                    q.push(currentNode -> left);
                if(currentNode -> right != NULL)
                    q.push(currentNode -> right);
                q.pop();
            }
        }
        return levelSum;
    }
};