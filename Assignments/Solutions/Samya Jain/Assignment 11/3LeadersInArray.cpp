//https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?track=DSASP-Arrays&batchId=154


// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int>vect;
         vect.push_back(a[n - 1]);
         int last = a[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            if(a[i] >= last){
            vect.push_back(a[i]);
            last = a[i];
            }
        }
        reverse(vect.begin(), vect.end());
        return vect;
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array

        int a[n];

        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);

        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }

        cout << endl;

   }
}
  // } Driver Code Ends



/*Time Limit Exceeded code

#include <bits/stdc++.h>
using namespace std;


class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int>vect;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
               if(a[i] < a[j])
                    break;
                if(j == n - 1)
                    vect.push_back(a[i]);

            }
        }
        return vect;
    }
};
*/


