class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		//code here
		int count=0,i,j;
		for(i=0;i<A.size();i++)
		{
		    for(j=0;j<A[0].size();j++)
		    {
		        if(A[i][j]==0)
		        {
		            count++;
		            continue;
		            
		        }
		        else break;
		    }
		    if(j==0)
		    break;
		}
		return count;
	}
};
