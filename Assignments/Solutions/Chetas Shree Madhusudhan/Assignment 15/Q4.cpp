// https://leetcode.com/problems/first-unique-character-in-a-string/
class Solution {
public:
    int firstUniqChar(string s) {
        if(!s.size()) return -1;
        unordered_map<char ,pair<int,int>> h;
        priority_queue <int, vector<int>,greater<int>> min;        
        for(int i=0;i<s.size();i++){
            h[s[i]].first++;  // counting the number of occurance of that char
            h[s[i]].second =i; //updating to its lastest index num            
        }
        for(auto x : h){
            if(x.second.first == 1) min.push(x.second.second);
        }
        return !min.empty() ? min.top():-1;
    }
};