// Question Link: https://leetcode.com/problems/kth-largest-element-in-an-array/

class Solution {
  public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>min;
        for(int i=0; i<nums.size(); i++) {
            min.push(nums[i]);
            if(min.size()>k) {
                min.pop();
            }
        }
        return min.top();
    }
};
