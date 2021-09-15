#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rat(int x,int y, vector<vector<int>> &m,int n,vector<vector<int>> & vis, string ans,
             vector<string> &all) {
        if(x==n-1 && y==n-1) {
            all.push_back(ans);
            return;
        }
        int dx[]= {1,0,0,-1};
        int dy[]= {0,-1,1,0};
        string dir="DLRU";
        for(int i=0; i<4; i++) {
            int rr=x+dx[i];
            int cc=y+dy[i];
            if(rr>=0 && cc>=0 && rr<n && cc<n && m[rr][cc]==1 && vis[rr][cc]==0) {
                vis[x][y]=1;
                rat(rr,cc,m,n,vis,ans+dir[i],all);
                vis[x][y]=0;
            }
        }
    }

    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<vector<int>> vis(n,vector<int>(n,0));
       
        string ans="";
        vector<string> all;
        if(m[0][0]==1)
            rat(0,0,m,n,vis,ans,all);
        return all;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
} 
