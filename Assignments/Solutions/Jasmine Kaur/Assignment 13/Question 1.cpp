class Solution {
  public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>hash;
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            if (hash.find(x) != hash.end()) {
                return{i, hash.find(x)->second};
            } else {
                hash[nums[i]] = i;
            }
        }
        return {-1, -1};
    }
};
