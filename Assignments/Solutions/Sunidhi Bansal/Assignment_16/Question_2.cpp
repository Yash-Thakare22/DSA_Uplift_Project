class Solution {
public: 
    vector<int> nearest_greatest_integer(vector<int>& nums2) {
        vector<int> output;
        stack<int> s;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            if (s.size() == 0) {
                output.push_back(-1);
            }
            else if (s.size() != 0 && nums2[i] < s.top()) {
                output.push_back(s.top());
            }
            else if(s.size() != 0 && nums2[i] >= s.top()) {
                while(s.size() != 0 && nums2[i] >= s.top()) {
                    s.pop();
                }

                if(s.size() == 0) {
                    output.push_back(-1);    
                }
                else {
                    output.push_back(s.top());
                }
            }
            s.push(nums2[i]);
        }   
    
        reverse(output.begin(),output.end());
        return output;
    }
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        vector<int> greatest_int_to_right = nearest_greatest_integer(nums2);
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    output.push_back(greatest_int_to_right[j]);
                }
            }
        }
        return output;
    }
};