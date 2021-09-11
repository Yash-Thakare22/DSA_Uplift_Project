
#include <bits/stdc++.h>

using namespace std;

 

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{int count ;
        int n = A.size();
        count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (A[i][j] == 0)
                    count++;
            }
        }
        return count;
	}
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}
 