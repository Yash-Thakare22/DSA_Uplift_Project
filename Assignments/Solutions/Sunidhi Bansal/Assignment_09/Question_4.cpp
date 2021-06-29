// Count items matching a rule

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
       int index = 0;
       int count = 0;
       vector<string> str={"type","color","name"};
       for(int i = 0; i < str.size(); i++) {
           if(ruleKey == str[i]) {
               index = i;
               break;
           }
       }
       for(int i = 0; i < items.size(); i++) {
               if(items[i][index] == ruleValue) {
                   count++;
               }
       }
        return count;
    }
};
