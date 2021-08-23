class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> index_collector;
        for (int i = 0; i < nums.size(); i++) {
            if (index_collector.find(target - nums[i]) != index_collector.end()) {
                ans.push_back(i);
                ans.push_back(index_collector[target - nums[i]]);
            }
            index_collector[nums[i]] = i;
        }
        return ans;
    }
};