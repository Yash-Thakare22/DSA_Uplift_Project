// Question Link: https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
  public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        for (char c : s)
            mp[c]++; // count the char present in the string
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 1) // checking the first the char with count 1
                return i;      // return the index
        }
        return -1;
    }
};
