/*

Ques 5 
PATTERN: https://practice.geeksforgeeks.org/problems/triangle-shrinking-downwards0459/1

*/
class Solution{
  public:
  string triDownwards(string S){
   int len = S.length();
        string res="";
        for(int  i = 0; i < len; i++)
        {
            for(int j = 0; j < len; j++)
            {
                res += S[j];
            }
            S[i]='.';
        }
        return res;
    }
