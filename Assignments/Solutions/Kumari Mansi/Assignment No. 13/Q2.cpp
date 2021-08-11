// https://leetcode.com/problems/roman-to-integer/
class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> mp;
        mp.insert({'I', 1});
        mp.insert({'V', 5});
        mp.insert({'X', 10});
        mp.insert({'L', 50});
        mp.insert({'C', 100});
        mp.insert({'D', 500});
        mp.insert({'M', 1000});
        int n = s.size();
        int ans = mp[s.back()];
        for (int i = n - 2; i >= 0; --i)
        {
            char s1 = s[i];
            char s2 = s[i + 1];
            if (mp[s1] < mp[s2])
            {
                ans -= mp[s1];
            }
            else
            {
                ans += mp[s1];
            }
        }
        return ans;
    }
};