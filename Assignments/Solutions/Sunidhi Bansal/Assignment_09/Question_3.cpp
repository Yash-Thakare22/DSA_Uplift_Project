// Shuffle String

class Solution {
public:
    void swap(int &t, int &p) {
        int temp = t;
        t = p;
        p = temp;
    }
    void sort(char &t,char &p) {
        char temp = t;
        t = p;
        p = temp;
    }

    string restoreString(string s, vector<int>& indices) {
        for (int i = 0; i < indices.size() - 1; i++) {
            for(int j = 0; j < indices.size() - 1 - i; j++) {
                if (indices[j] > indices[j + 1]) {
                    swap(indices[j],indices[j + 1]);
                    sort(s[j],s[j + 1]);
                }
            }
         }
        return s;
    }
};