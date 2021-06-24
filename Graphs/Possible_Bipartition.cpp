class Solution {
private:
    bool dfs_coloring(vector<vector<int>>& graph, vector<int>& colors, int idx, int color){
        colors[idx] = color;
        for(int neighbor : graph[idx])
        {
            if( colors[neighbor] == color )
                return false;
            if( colors[neighbor] == 0 && !dfs_coloring( graph, colors, neighbor, -color) )
                return false;
        }
        return true;
    }
    
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(n, vector<int>());
        for(vector<int> dis : dislikes)
        {
            graph[dis[0] - 1].push_back(dis[1] - 1);
            graph[dis[1] - 1].push_back(dis[0] - 1);
        } 
        vector<int> colors(n, 0);
        for(int i=0; i<n; i++)
            if( colors[i] == 0 && !dfs_coloring( graph, colors, i, 1) )
                return false;
        return true;
    }
};