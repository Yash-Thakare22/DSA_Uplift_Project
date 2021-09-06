// Question Link : https://practice.geeksforgeeks.org/problems/level-of-nodes-1587115620/1/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    //Function to find the level of node X.
    int nodeLevel(int V, vector<int> adj[], int X) {
        bool visited[V+1];
        for(int i=0; i<V; i++) {
            visited[i]=false;
        }
        visited[0]=true;
        int res=bfs(V,adj,visited,0,X);
        return res;
    }

    int bfs(int V,vector<int> adj[],bool visited[],int s,int X) {
        queue<int> q;
        q.push(s);
        int i=0;
        int ans=0;
        while(q.empty()==false) {
            int count=q.size();
            ans+=1;
            for(i=0; i<count; i++) {
                int curr=q.front();
                q.pop();
                if(curr==X) {
                    return ans-1;
                }
                for(int x: adj[curr]) {
                    if(visited[x]==false) {
                        q.push(x);
                        visited[x]=true;
                    }
                }
            }
            i++;
        }
        return -1;
    }
};

// { Driver Code Starts.


int main() {

    int t;
    cin >> t;
    while(t--) {
        int V, E, X;
        cin >> V >> E;

        vector<int> adj[V];

        for(int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cin>>X;

        Solution obj;
        cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}

// } Driver Code Ends
