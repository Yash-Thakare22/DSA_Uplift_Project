class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int i,count=0;
        for(i=0;i<items.size();i++)
        {
            if(ruleKey=="type")
            {
                if(items[i][0]==ruleValue)
                    count++;
            }
            if(ruleKey=="color")
            {
                if(items[i][1]==ruleValue)
                    count++;
            }
            if(ruleKey=="name")
            {
                if(items[i][2]==ruleValue)
                    count++;
            }
           
        }
        return count;
    }
};
