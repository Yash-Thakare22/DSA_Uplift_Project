class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int count=0;
      
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                if((ruleKey=="type"&& ruleValue==items[i][0])||(ruleKey=="color"&& ruleValue==items[i][1])||(ruleKey=="name"&& ruleValue==items[i][2])){
                    count++;
                    break;
                }
            }
        }
       return count; 
    }
};
