// { Driver Code Starts
#include <bits/stdc++.h>
#include<string>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string triDownwards(string S) {
        // code here
        string S1=S;
        for(int i=0;i<S.size()-1;i++){
                
                S.replace(i,1,".");
                S1+=S;
                
            }
        return S1;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin >> S;

        Solution ob;
        string ans=ob.triDownwards(S);
        
        for(int i=0 ; i<ans.length() ; i++)
        {
            cout<<ans[i];
            if((i+1)%S.length()==0)
                cout<<endl;
        }
        
    }
    return 0;
}  // } Driver Code Ends
