class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int c=0,j;
        if(ruleKey.compare("type")==0)
            j=0;
        else if(ruleKey.compare("color")==0)
            j=1;
        else
            j=2;
       for(int i=0;i<items.size();i++){
           if(items[i][j].compare(ruleValue)==0)
               c++;
       }
        return c;
    }
};
