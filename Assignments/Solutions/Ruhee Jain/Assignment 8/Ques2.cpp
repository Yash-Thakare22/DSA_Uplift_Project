/*

Ques2 

SEARCHING: https://practice.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1

*/


class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
	    int n=A.size();
	    int count=0;
		for(int i=0; i<n; i++){
		    for(int j=0; j<; j++){
		      if(A[i][j]==0){
		          count++;
		      }  
		    }
		}
		return count;
	}
};
