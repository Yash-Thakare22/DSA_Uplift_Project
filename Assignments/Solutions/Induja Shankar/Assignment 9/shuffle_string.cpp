class Solution {
public:
    string restoreString(string s, vector<int>& indices)
    {
        vector<char> res(s.length());
        string result = "";
        
        for(int i = 0; i < s.length(); i++)
            res[indices[i]] = s[i];
        
        for(int i = 0; i < s.length(); i++)
            result += res[i];

        return result;         
    }
};
