class Solution {
public:
    string restore(string s, vector<int>& indices) {
        string m = s;
        for(int i =0; i < indices.size() ; i++) m[indices[i]] = s[i];
        return m;        
    }
};
