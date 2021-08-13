class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i,j,count=0;
     for(i=0;i<grid.size();i++)
		{
		    for(j=0;j<grid[0].size();j++)
		    {
		        if(grid[i][j]>=0)
		        {
		            count++;
		            continue;
		            
		        }
		        else break;
		    }
		    if(grid[i][0]<0)
		    break;
		}
		return (grid.size()*grid[0].size()-count);
    }   
};
