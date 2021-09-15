class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       
        int n=grid.size();
        int m=grid[0].size();
      
        for(int i=1;i<n;i++){
            grid[i][0]=grid[i][0]+grid[i-1][0];
        }
        for(int j=1;j<m;j++){
            grid[0][j]=grid[0][j]+grid[0][j-1];
        }
       
        for(int i=1;i<n;i++){
          
            for(int j=1;j<m;j++){
                
                grid[i][j]=min(grid[i][j-1],grid[i-1][j])+grid[i][j];
                  
            }
        }
        return grid[n-1][m-1];
        
    }
};
