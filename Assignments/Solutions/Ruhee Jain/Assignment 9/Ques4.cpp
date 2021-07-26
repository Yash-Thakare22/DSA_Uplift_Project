/*

Ques 4

STRINGS: https://leetcode.com/problems/count-items-matching-a-rule/

*/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue)
    {
        int count = 0;
        for(int i=0;i<items.size();i++)
        {
            if(ruleKey == "type" && items[i][0] == ruleValue)
            {
                count++;
            }
            else if(ruleKey == "color" && items[i][1] == ruleValue)
            {
                count++;
            }
            else if(ruleKey == "name" && items[i][2] == ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};

