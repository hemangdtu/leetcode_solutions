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
    int findSubtreeRangeInIn(int root_val, vector<int>& in, int inStart, int inEnd)
    {
        for(int i = inStart; i<=inEnd; i++) if(in[i] == root_val) return i;
        return -1;
    }
    
    TreeNode* constructFromInPost(vector<int>& in, int inStart, int inEnd, vector<int>& post, int postStart, int postEnd)
    {
        if( postStart > postEnd ) return NULL;
        if( postStart == postEnd ) return new TreeNode(post[postEnd]);
        
        int root_val = post[postEnd];
        TreeNode* root = new TreeNode(root_val);
        int rootInIn = findSubtreeRangeInIn( root_val, in, inStart, inEnd);
        int leftSubtreeLength = rootInIn - inStart;
        
        root->left = constructFromInPost( in, inStart, inStart+leftSubtreeLength-1, post, postStart, postStart+leftSubtreeLength-1);
        root->right = constructFromInPost( in, rootInIn+1, inEnd, post, postStart+leftSubtreeLength, postEnd-1);
        
        return root;
    }
    
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return constructFromInPost(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);
    }
};