class Solution {
public:
    int max(int mx, int o) {
        if (mx > o) {
            return mx;
        } 
        return o;
    }
    
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int end = 0;
        unordered_map<char, int> freq;
        int count = 1;
        int mx = 0;
        bool no_unique = false;
        
        while (end < s.length()) {
            if (freq.find(s[end]) == freq.end()) {
                freq[s[end]] = count;
                if (end == s.length() - 1) {
                    mx = max(mx, end - start + 1);
                }
            } else {
                freq[s[end]]++;
                no_unique = true;
            }

            if (freq[s[end]] > 1) {
                mx = max(mx, end - start);
                while (freq[s[end]] > 1) {
                    freq[s[start]]--;
                    if (freq[s[start]] == 0) {
                        freq.erase(s[start]);
                    }
                    start++;
                }
            }

            end++;
        }
        
        if (!no_unique) {
            return s.length();
        }
        return mx;
    }
};