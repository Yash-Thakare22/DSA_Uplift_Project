class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result;
        result.push_back(first);
        
        for(int i = 0; i < encoded.size(); i++)
            arr.push_back(first ^= encoded[i]);
            
        return result;
    }
};
