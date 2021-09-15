#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    
    vector<int>v;
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        bool vis[V]= {0};
        vis[0]=1;
        v.push_back(0);
        dfs(adj,vis,0);
        return v;
    }

    void dfs(vector<int> adj[],bool vis[],int u) {
        for(auto x: adj[u]) {
            if(vis[x]==0) {
                v.push_back(x);
                vis[x]=1;
                dfs(adj,vis,x);
            }
        }
    }
};


int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
