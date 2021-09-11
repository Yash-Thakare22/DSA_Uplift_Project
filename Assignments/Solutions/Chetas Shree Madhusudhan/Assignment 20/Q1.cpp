// https://leetcode.com/problems/permutation-sequence/
class Solution {
public:
    string getPermutation(int n, int k) {        
        int m=0,h=1;
        for(int i=n;i>0;i--){             
            m+=i*h;
            h*=10;
        }
        string s = to_string(m);        
        int i=1;
        do{
            if(i==k) break;
            i++;
        }while(next_permutation(s.begin(),s.end()));
        return s;
    }
};