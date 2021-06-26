//Question Link: https://leetcode.com/problems/count-items-matching-a-rule/

class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int ans = 0;
        int index = 0;
        if (ruleKey == "color")
            index = 1;
        else if (ruleKey == "name")
            index = 2;

        for (auto it : items)
        {
            if (it[index] == ruleValue)
                ans++;
        }

        return ans;
    }
};