// Question Link: https://leetcode.com/problems/backspace-string-compare/

class Solution {
  public:
    string remove_backspaced_character(string str) {
        stack<char> s;
        for (int i = 0; i < str.length(); i++) {
            //cout<<"loop: "<<i<<" "<<str[i]<<endl;
            if ((str[i] == '#') && (s.size() != 0)) {
                s.pop();
            } else if (str[i] != '#') {
                s.push(str[i]);
                //cout<<s.size()<<endl;
            }
        }

        string new_str = "";
        while (s.size() != 0) {
            new_str += s.top();
            s.pop();
        }

        reverse(new_str.begin(), new_str.end());

        return new_str;

    }

    bool backspaceCompare(string s, string t) {
        s = remove_backspaced_character(s);
        t = remove_backspaced_character(t);

        return t == s;
    }
};
