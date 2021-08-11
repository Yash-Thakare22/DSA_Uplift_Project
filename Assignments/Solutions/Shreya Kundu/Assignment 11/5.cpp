class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        
    }
};
