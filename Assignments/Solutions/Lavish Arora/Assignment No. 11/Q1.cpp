class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int s1=0,s2=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<=j) s1+=matrix[i][j];
                if(i>=j) s2+=matrix[i][j];
            }
        } vector<int>s ={s1,s2};
        return s;
    }
};