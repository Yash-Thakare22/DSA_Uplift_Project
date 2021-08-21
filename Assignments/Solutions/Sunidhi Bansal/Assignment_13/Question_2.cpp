class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romans;
        romans['M'] = 1000;
        romans['D'] = 500;
        romans['C'] = 100;
        romans['L'] = 50;
        romans['X'] = 10;
        romans['V'] = 5;
        romans['I'] = 1;
        
        int num = 0;
        
        for (int i  = 0; i < s.length(); i++) {
            int num_1 = romans[s[i]];
            int num_2 = romans[s[i + 1]];
            if (i > s.length() || num_1 >= num_2) {
                num += num_1;
            } else {
                num += num_2 - num_1;
                i++;
            }
        }
        return num;
    }
};


