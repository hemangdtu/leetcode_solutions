class Solution {
public:
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
        int res = 0;
        vector<vector<int>> graph(n, vector<int>(n, -1));
        vector<bool> visited(n);
        priority_queue<pair<int, int>> pq;
        pq.push({maxMoves, 0});
        for(auto &edge : edges)
        {
            graph[edge[0]][edge[1]] = edge[2];
            graph[edge[1]][edge[0]] = edge[2];
        }
        while(!pq.empty())
        {
            auto t = pq.top(); pq.pop();
            int move = t.first, cur = t.second;
            if(visited[cur])
                continue;
            visited[cur] = true;
            ++res;
            for(int i = 0; i < n; ++i)
            {
                if(graph[cur][i] == -1)
                    continue;
                if(move > graph[cur][i] && !visited[i])
                    pq.push({move - graph[cur][i] - 1, i});
                graph[i][cur] -= min(move, graph[cur][i]);
                res += min(move, graph[cur][i]);
            }
        }
        return res;
    }
};