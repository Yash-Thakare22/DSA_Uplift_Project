class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i,j,count=0,n,m;
        m=grid.size();
        n=grid[0].size();
        for(i=m-1;i>=0;i--)
        {
            for(j=n-1;j>=0;j--)
            {
                if(grid[i][j]<0)
                    count++;
                else
                    break;
                    
            }
        }
        return count;
    }
};
