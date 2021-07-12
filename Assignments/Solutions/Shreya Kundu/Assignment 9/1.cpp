class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j=n;
        for(int i=n;i<2*n-1;i++){
            int k=j;
            int m=i;
           while(k-- && k>0){               
            swap(nums[m],nums[m-1]);
               m--;
           }
           j--;
        }
        vector<int>ans;
        for(int i=0;i<2*n;i++)
            ans.push_back(nums[i]);
        return ans;
    }
};
