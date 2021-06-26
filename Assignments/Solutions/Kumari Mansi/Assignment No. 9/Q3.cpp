//Question Link: https://leetcode.com/problems/shuffle-string/

class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {

        string res;
        res.resize(s.length());
        for (int i = 0; i < indices.size(); i++)
        {
            res[indices[i]] = s[i];
        }
        return res;
    }
};
