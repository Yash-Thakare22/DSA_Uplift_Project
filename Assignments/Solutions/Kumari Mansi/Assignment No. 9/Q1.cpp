//Question Link: https://leetcode.com/problems/shuffle-the-array/

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> result;
        for (int i = 0, j = i + n; i < n, j < nums.size(); i++, j++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[j]);
        }
        return result;
    }
};