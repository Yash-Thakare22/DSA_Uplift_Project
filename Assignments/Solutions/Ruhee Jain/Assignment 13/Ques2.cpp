/*

Ques2

https://leetcode.com/problems/roman-to-integer/

*/

class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
    
        map<char,int>roman={
            {'I',1 },{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}           
        };
        
        for(int i=0; i<s.length(); i++){
            if(i==s.length()-1){
                sum+=roman[s[i]];
                break;
            }
            if(roman[s[i]]>=roman[s[i+1]]){
                sum+=roman[s[i]];
            }
          else{
              sum+=(roman[s[i+1]]-roman[s[i]]);
              i++;
          }            
        }        
        return sum;
        
    }
};
