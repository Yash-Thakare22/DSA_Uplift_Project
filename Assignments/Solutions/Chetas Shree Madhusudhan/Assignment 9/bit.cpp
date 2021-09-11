class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector <int> m;
        m.push_back(first);
        for(int i=0;i<encoded.size();i++){
            m.push_back(m[i]^encoded[i]);
        }return m;
        
    }
};