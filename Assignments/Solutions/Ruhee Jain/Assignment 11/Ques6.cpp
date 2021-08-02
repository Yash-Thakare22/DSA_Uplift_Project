/*

Ques6

https://practice.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1/?track=DSASP-Matrix&batchId=154

*/

#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public:
    vector<int> sumTriangles(const vector<vector<int> >& a, int n)
    {
        vector<int> res;
        int usum=0;
        int lsum=0;
        for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
             if(i<=j){
                 usum+=a[i][j];
             }
         }
     }
      for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
             if(i>=j){
                 lsum+=a[i][j];
             }
         }
     }
      res.push_back(usum);
      res.push_back(lsum);
    return res;
    }
};

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
} 
