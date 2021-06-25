class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
         vector<int> arr = {first};
        for (const auto& x: encoded) {
            arr.emplace_back(arr.back() ^ x);
        }
        return arr;
    }
};
