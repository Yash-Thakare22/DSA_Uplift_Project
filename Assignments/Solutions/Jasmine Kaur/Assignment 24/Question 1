class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> B(amount+1,amount+1);
        B[0]=0;
        for(int i=0;i<coins.size();i++){
            for(int j=coins[i];j<=amount;j++){
                B[j] = min(B[j],B[j-coins[i]]+1);
            }
        }
        
        if(B[amount]==amount+1)
            return -1;
        return B[amount];
    }
};
