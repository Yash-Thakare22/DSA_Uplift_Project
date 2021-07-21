class Solution {
public:
int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0, start = 0;
        unordered_map<int,int> m;
        for(int i=0;i < n;i++){
            if(m.find(s[i])!=m.end()){
                start = max(start, m[s[i]]+1);
            }
            ans = max (ans, i+1-start);
            m[s[i]] = i;
        }
        return ans;
    }
};
