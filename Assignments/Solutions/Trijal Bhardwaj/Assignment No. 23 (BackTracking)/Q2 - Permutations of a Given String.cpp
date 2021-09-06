// Question Link : https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<string> ans;
    void helper(string ques, string asf) {
        if(ques.size()==0) {
            ans.push_back(asf);
        }
        char ch;
        string left,right,remaining;
        for(int i=0; i<ques.size(); i++) {
            left = ques.substr(0,i);
            right = ques.substr(i+1);
            remaining = left+right;
            helper(remaining,asf+ques[i]);
        }
    }

    vector<string>find_permutation(string S) {
        // Code here there
        string asf="";
        helper(S,asf);
        sort(ans.begin(),ans.end());
        return ans;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.find_permutation(S);
        for(auto i: ans) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
