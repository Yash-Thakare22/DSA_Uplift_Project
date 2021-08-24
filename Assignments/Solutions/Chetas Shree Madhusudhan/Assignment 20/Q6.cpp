// https://leetcode.com/problems/prime-palindrome/
class Solution {
public:
    bool ispali(int n){
        string s = to_string(n);
        int m = s.length();
        if(m<=1) return true;
        for(int i=0;i<m/2;i++){
            if(s[i] != s[m-i-1]) return false;
        }return true;
    }
    bool isprime(int n){
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i == 0) return false;
        }return true;
    }
    int primePalindrome(int n) {
        if(n>= 9989900)
            return 100030001;
        for(int i=n;i<100000000;i++){
            if(isprime(i) && ispali(i)) return i;
        }return -1;
    }
};