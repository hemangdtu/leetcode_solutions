class Solution {
public:
    int find_set(int x,vector<int>& parent){
        if(parent[x]==x)
            return x;
        return parent[x] = find_set(parent[x],parent);
    }
    vector<vector<int>> matrixRankTransform(vector<vector<int>>& mat) {
        int n = mat.size(),m = mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        map<int,vector<pair<int,int>>> ele;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                ele[mat[i][j]].push_back({i,j});
        }
        
        vector<int> rank(n+m,0);
        for(auto itr:ele){
            vector<int> parent(n+m,0);
            for(int i=0;i<parent.size();i++)
                parent[i] = i;
            for(auto it:itr.second){
                int i = it.first,j = it.second;
                int xroot = find_set(i,parent),yroot = find_set(j+n,parent);
                parent[xroot] = yroot;
                rank[yroot] = max(rank[xroot],rank[yroot]);
            }
            vector<int> curr = rank;
            for(auto it:itr.second){
                int i = it.first,j = it.second;
                int r = find_set(i,parent);
                ans[i][j] = 1 + rank[r];
                curr[i] = rank[r] + 1;
                curr[j+n] = rank[r] + 1;
            }
            swap(rank,curr);
        }
        return ans;
    }
};