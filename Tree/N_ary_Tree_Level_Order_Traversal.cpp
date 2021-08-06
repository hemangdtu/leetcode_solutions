/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(root == NULL)
            return res;
        queue<Node*> que({root});
        while(!que.empty())
        {
            int level_size = que.size();
            vector<int> tmp;
            
            for(int i=0; i<level_size; i++)
            {
                Node* tmpnode = que.front(); que.pop();
                tmp.push_back( tmpnode->val );
                if(tmpnode->children.size() > 0)
                    for(auto child : tmpnode->children)
                        que.push(child);
            }
            res.push_back(tmp);
        }
        return res;
    }
};