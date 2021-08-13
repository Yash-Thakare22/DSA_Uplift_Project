//https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1/?track=DSASP-Matrix&batchId=154


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    {
        for (int i = 0; i < n; i++)
            for (int j = i; j < n; j++)
                swap(matrix[i][j], matrix[j][i]);
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
        ob.transpose(matrix,n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
