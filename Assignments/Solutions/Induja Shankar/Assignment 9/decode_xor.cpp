class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result;
        result.push_back(first);
        
        int count = first;
        
        for(int i = 0; i < encoded.size(); i++)
        {
            result.push_back(encoded[i] ^ count);
            count = encoded[i] ^ count;
        }
            
        return result;
    }
};
