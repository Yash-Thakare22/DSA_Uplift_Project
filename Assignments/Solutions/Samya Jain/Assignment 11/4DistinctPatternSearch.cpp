//https://practice.geeksforgeeks.org/problems/distinct-pattern-search-1587115620/1/?track=DSASP-Strings&batchId=154


// C++ program for Naive Pattern
// Searching algorithm
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt)
    {
    	size_t found = txt.find(pat);
    	if (found != string::npos) {

    	    return 1;
    	}
        else{

            return 0;
        }
    }
};




// { Driver Code Starts.

// Driver Code
int main()
{

	int t;
	cin >> t;

	while(t--){
	    string s, p;
	    cin >> s >> p;
	    Solution obj;
	    if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}

	return 0;
}  // } Driver Code Ends
