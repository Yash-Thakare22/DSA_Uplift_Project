class Solution {
  public:
    string triDownwards(string S) {
        // code here
        int n=S.length();
        string B="";
        for(int i=n;i>0;i--){
            for(int j=0;j<n-i;j++){
                B+=".";
            }
            for(int j=i;j>0;j--){
                B+=S[n-j];
            }
            
            
        }
        return B;
        
        
    }
};
