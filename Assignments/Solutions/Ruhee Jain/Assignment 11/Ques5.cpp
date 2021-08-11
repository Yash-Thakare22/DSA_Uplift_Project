/*

Ques5

https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1/?track=DSASP-Matrix&batchId=154

*/


#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public:  
 
    void transpose(vector<vector<int> >& a, int n)
    { 
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(a[i][j],a[j][i]);
            }
        }
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > a(n); 
        for(int i=0; i<n; i++)
        {
            a[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }

        Solution ob;
        ob.transpose(a,n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
