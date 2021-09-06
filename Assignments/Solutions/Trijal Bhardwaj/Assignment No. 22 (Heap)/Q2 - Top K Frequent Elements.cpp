// Question Link: https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
  public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>min;
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        for(auto i= mp.begin(); i!=mp.end(); i++) {
            int x = i->first;
            int y= i ->second;
            min.push({y,x});
            if(min.size()>k) {
                min.pop();
            }
        }
        vector<int>ans;
        while(!min.empty()) {
            int x = min.top().second;
            ans.push_back(x);
            min.pop();
        }
        return ans;
    }
};
