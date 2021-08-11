/*

Ques 3

SORTING: https://leetcode.com/problems/shuffle-string/

*/



class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res=s;
        for (int i = 0; i < s.size(); i++)
        {
            res[indices[i]] = s[i];
        }
        return res;
    }
};
