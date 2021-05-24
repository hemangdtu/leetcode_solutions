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
    TreeNode* convertArrayToBST(vector <int> &a , int l , int r){
        if(l > r)
            return NULL;
        if(l == r)
            return new TreeNode(a[l]);
        int mid = (l + (r - l) / 2);
        TreeNode* head = new TreeNode(a[mid]);
        head -> left = convertArrayToBST(a, l, mid - 1);
        head -> right = convertArrayToBST(a, mid + 1, r);
        return head;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return convertArrayToBST(nums, 0, n - 1);
    }
};