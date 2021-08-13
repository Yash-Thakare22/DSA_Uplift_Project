class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>m;
        for(int i=0;i<n;i++){
            m.push_back(nums[i]);
            m.push_back(nums[n+i]);            
        }return m;        
    }
};