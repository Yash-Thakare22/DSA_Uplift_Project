class Solution {
public:
    int firstUniqChar(string s) {
        if(!s.size()) return -1;
        unordered_map<char ,pair<int,int>> h;
        priority_queue <int, vector<int>,greater<int>> min;        
        for(int i=0;i<s.size();i++){
            h[s[i]].first++;  
            h[s[i]].second =i;           
        }
        for(auto x : h){
            if(x.second.first == 1) min.push(x.second.second);
        }
        return !min.empty() ? min.top():-1;
    }
