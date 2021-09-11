class Solution {
public:
    string print(map<int, string, greater<int>> m, int ch, int freq) {
        string s = "";
        for (int i = 0; i < freq; i++) {
            s  += m[ch];
        }
        return  s;
    }

    string intToRoman(int num) {
        map<int, string, greater<int>> i2r;
        i2r[1000] = "M";
        i2r[900] = "CM";
        i2r[500] = "D";
        i2r[400] = "CD";
        i2r[100] = "C";
        i2r[90] = "XC";
        i2r[50] = "L";
        i2r[40] = "XL";
        i2r[10] = "X";
        i2r[9] = "IX";
        i2r[5] = "V";
        i2r[4] = "IV";
        i2r[1] = "I";
        
        map<int, int, greater<int>> m;
    
        for (auto pr : i2r) {
            if (num / pr.first != 0) {
                m[pr.first] = num / pr.first;
                num %= pr.first;
            }
        }

        string s = "";
        for (auto pr : m) {
           s += print(i2r, pr.first, pr.second);
        }

        return s;
    }
};