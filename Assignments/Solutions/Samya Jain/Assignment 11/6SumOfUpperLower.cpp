//https://practice.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1/?track=DSASP-Matrix&batchId=154


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0 ;j < n; j++){
                if(i <= j)
                    sum1 += matrix[i][j];
                if(i >= j)
                    sum2 += matrix[i][j];
            }
        }
        vector<int>sums ={sum1,sum2};
        return sums;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        vector<int> result = ob.sumTriangles(matrix,n);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
