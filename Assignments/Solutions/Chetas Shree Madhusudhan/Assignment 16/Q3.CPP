// https://leetcode.com/problems/next-greater-element-i/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m1;
        stack<int>s;
        int n = nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top()<nums2[i]){
                s.pop();
            }
            if(s.empty()) m1[nums2[i]] = -1;
            else{
                m1[nums2[i]] = s.top();
            }s.push(nums2[i]);
        }
        vector<int>ans;
        for(auto x:nums1){
            ans.push_back(m1[x]);
        }return ans;
    }
};