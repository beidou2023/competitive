int n,m;
vector<bool> vis(n);
vector<vector<int>> g(n);
void dfs(int node){
    vis[node] = 1;
    for(int x : g[node])
        if(!vis[x]) dfs(x);
}
