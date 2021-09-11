// https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        if (n == 0)
            return 0;
        int j = 0;
        int maxi = INT_MIN;
        vector<int> hash(100, 0);
        for (int i = 0; i < n; i++)
        {
            if (hash[s[i] - ' '] == 0)
                hash[s[i] - ' ']++;
            else
            {
                while (hash[s[i] - ' '])
                {
                    hash[s[j] - ' ']--;
                    j++;
                }
                hash[s[i] - ' ']++;
            }
            maxi = max(maxi, i - j + 1);
        }
        return maxi;
    }
};