// class Solution {
// public:
//     int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
//         int s,c=0;
//         if(ruleKey == "color")
//             s=1;
//         else if (ruleKey == "type")
//             s=0;
//         else s=2;
//         for(int i=0;i<items.size();i++){
//             if(items[i][s] == ruleValue)
//                 c++;
//         }return c;
        
//     }
// };