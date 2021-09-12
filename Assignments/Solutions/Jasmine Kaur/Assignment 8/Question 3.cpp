#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int countZeros(vector<vector<int>>arr)
  {
		int c=0;
		int n=arr.size();
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        if(arr[i][j] == 0)
              c++;
		    }
		}
    return c;
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
        vector<vector<int>>arr(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(arr)<<'\n';
    }
    return 0;
}
