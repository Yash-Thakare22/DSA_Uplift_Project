//https://leetcode.com/problems/shuffle-string/

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str = s;
        for (int i = 0; i < s.size(); i++) {
            str[indices[i]] = s[i];
        }
        return str;
    }
};
