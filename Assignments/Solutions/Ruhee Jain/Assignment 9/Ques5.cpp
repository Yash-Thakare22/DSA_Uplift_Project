/*

Ques 5

BIT MANIPULATION: https://leetcode.com/problems/decode-xored-array/

*/

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res(encoded.size()+1);
        res[0]=first;
        for(int i=0;i<encoded.size();i++)
            res[i+1]=res[i] ^ encoded[i];
        return res;
    }
};
