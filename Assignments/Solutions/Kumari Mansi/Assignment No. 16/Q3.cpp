// Q3:  https://leetcode.com/problems/next-greater-element-i/
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> ans;
        unordered_map<int, int> mp;

        stack<int> st;
        st.push(nums2[0]);

        for (int i = 0; i < n2; i++)
        {

            while (!st.empty() && nums2[i] > st.top())
            {

                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

        for (int i = 0; i < n1; i++)
        {

            if (mp.find(nums1[i]) != mp.end())
            {

                ans.push_back(mp[nums1[i]]);
            }
            else
                ans.push_back(-1);
        }

        return ans;
    }
};