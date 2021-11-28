class Solution {
private:
    void findPath (vector<vector<int>> & graph, int x, vector<int> & path, int target, vector<vector<int>> & result)
    {
        if(x == target)
        {
            path.push_back(x);
            result.push_back(path);
            path.pop_back();
            return;
        }
        auto nodes = graph[x];
        path.push_back(x);
        for(auto next : nodes)
            findPath(graph, next, path, target, result);
        path.pop_back();
    }
    
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int target = graph.size() - 1;
        vector<vector<int>> result;
        vector<int> path;
        path.push_back(0);
        for(auto x : graph[0])
            findPath(graph, x, path, target, result);
        return result;
    }
};