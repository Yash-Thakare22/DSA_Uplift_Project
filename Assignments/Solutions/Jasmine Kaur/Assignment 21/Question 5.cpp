#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    int m,n;
    void dfs(vector<vector<char>> &grid, int i, int j) {
        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
            return;
        grid[i][j] = '0';
        for(int r = -1; r < 2; r++) {
            for(int c = -1; c < 2; c++)
                dfs(grid, i+r, j+c);
        }
    }
  public:
  
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int island = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == '1') {
                    island++;
                    dfs(grid, i, j);
                }
            }
        }
        return island;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
} 
