//https://leetcode.com/problems/count-items-matching-a-rule/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt = 0;
        if(ruleKey == "type") {
            for (int i = 0; i < items.size(); i++) {
                if (items[i][0] == ruleValue)
                    cnt++;
            }
        }
        else if(ruleKey == "color") {
            for (int i = 0; i < items.size(); i++) {
                if (items[i][1] == ruleValue)
                    cnt++;
            }
        }
        else {
            for (int i = 0; i < items.size(); i++) {
                if (items[i][2] == ruleValue)
                    cnt++;
            }
        }

       return cnt;
    }
};
