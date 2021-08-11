//https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>vect;
        for (int i = 0; i < nums.size()/2; i++) {
            vect.push_back(nums[i]);
            vect.push_back(nums[n+i]);
        }
        return vect;
    }
};
