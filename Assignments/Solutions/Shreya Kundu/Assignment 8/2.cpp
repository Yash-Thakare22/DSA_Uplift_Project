class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		// Your code here
  int i=0,j=A.size()-1,c=0;
  while(i<A.size()&&j>=0){
    if(A[i][j]==1)
     --j;
    else{
     c+=j+1;
     ++i;
     }
  }
  return c;
  }
};
