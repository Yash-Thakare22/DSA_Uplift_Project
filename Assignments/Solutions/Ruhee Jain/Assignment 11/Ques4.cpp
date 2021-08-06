/*

Ques4

https://practice.geeksforgeeks.org/problems/distinct-pattern-search-1587115620/1/?track=DSASP-Strings&batchId=154

*/

#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
    public:
    bool search(string pat, string txt) 
    { 
     int found = txt.find(pat);
        while (found != string::npos) {
            return true;   
            found = txt.find(pat, found + 1);
    }
    return false;
    } 
};

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
} 
