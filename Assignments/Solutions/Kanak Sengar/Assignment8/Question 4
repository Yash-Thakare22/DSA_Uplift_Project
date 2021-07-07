#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> findElements(int a[], int n)
    {
        // Your code goes here 
        sort(a,a+n);
        vector <int> m;
        for(int i=0;i<n-2;i++){
            m.push_back(a[i]);
        }return m;
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
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        Solution ob;
        vector <int> res = ob.findElements(a,n);
        
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
    }
}  
