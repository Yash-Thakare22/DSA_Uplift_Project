//Q1: Shuffle the array

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> vect_1;
        int i = 0;
        int j = n;
        for (i = 0, j = n; i < n, j < 2 * n; i++, j++) {
            vect_1.push_back(nums[i]);
            vect_1.push_back(nums[j]);
        }
        return vect_1;
    }
};