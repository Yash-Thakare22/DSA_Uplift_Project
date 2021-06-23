class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2*n);
        
        for(int i = 0, j = n; i < nums.size() / 2, j < nums.size(); i++, j++)
        {
            result[i * 2] = nums[i];
            result[i * 2 + 1] = nums[j];
            
        }
        
        return result;
    }
};
