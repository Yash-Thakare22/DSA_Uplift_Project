} Driver Code Ends
class Solution {
  public:
    string triDownwards(string S) {
        int i,j,len;
        len=S.length();
        string a;
        for(i=0;i<len;i++)
        {
        
            for(j=0;j<len;j++)
            {
                if(j<i)
                a+=".";
                else
                a+=S[j];
              
            
            }
        }
        return a;
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
