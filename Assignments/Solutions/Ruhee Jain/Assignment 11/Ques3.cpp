/*

Ques3

https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?track=DSASP-Arrays&batchId=154

*/

#include <bits/stdc++.h>
using namespace std;
    
class Solution{
   
    public:
    vector<int> leaders(int a[], int n){
        vector<int> res;
        int max=a[n-1];
        res.push_back(max);
        
        for(int i=n-2; i>=0; i--){
            if(a[i]>=max){
                max=a[i];
                res.push_back(max);
            }
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};


int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
   
        vector<int> v = obj.leaders(a, n);

        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
