class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int key, val, count = 0;
        
        if(ruleKey == "type")
            key = 0;
        if(ruleKey == "color")
            key = 1;
        if(ruleKey == "name")
            key = 2;
        
        for(int i = 0; i < items.size(); i++)
            if(items[i][key] == ruleValue)
                count++;
        
        return count;
        
    }
};
